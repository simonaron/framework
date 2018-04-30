
# sync project
rsync -azP ./ pi@192.168.50.114:/home/pi/project

# build HC image on armv7l and push to registry
ssh pi@192.168.50.114 <<- END_SSH
  cd project
  docker build . --build-arg ARCH=armv7l -t project_hc -f Dockerfile_HC 
  docker tag project_hc 192.168.50.100:5000/project_hc
  docker push 192.168.50.100:5000/project_hc
END_SSH

# build MC image on x86_64 and push to registry
docker build . --build-arg ARCH=x86_64 -t project_mc -f Dockerfile_MC 
docker tag project_mc 192.168.50.100:5000/project_mc
docker push 192.168.50.100:5000/project_mc

# deploy services
docker stack deploy --compose-file docker-compose.yml demo
