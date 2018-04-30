
# sync project
rsync -azP ./ pi@192.168.50.114:/home/pi/project

# build HC image on armv7l and push to registry
ssh pi@192.168.50.114 <<- END_SSH
  cd project
  docker build . --build-arg ARCH=armv7l -t project_armv7l -f Dockerfile
  docker tag project_armv7l 192.168.50.100:5000/project_armv7l
  docker push 192.168.50.100:5000/project_armv7l
END_SSH

# build MC image on x86_64 and push to registry
docker build . --build-arg ARCH=x86_64 -t project_x86_64 -f Dockerfile
docker tag project_x86_64 192.168.50.100:5000/project_x86_64
docker push 192.168.50.100:5000/project_x86_64

# deploy services
docker stack deploy --compose-file docker-compose.yml demo
