## README
Run Titan with 2 HCs (on 2 raspberry) over docker

# SETTING UP DEVICES
Download Raspbian Lite
  from https://www.raspberrypi.org/downloads/raspbian/

Unzip than write to SD cards
  with: Startup Disk Creator (on ubunutu)

Create an empty file named "ssh" on boot part, for enable ssh.

Check ip on LAN before and after you connect your device:
  e.g.: sudo nmap -sP -n 192.168.1.0/24

Copy your public key to device:
  e.g.: cat .ssh/id_rsa.pub | ssh pi@192.168.1.73 'cat >> .ssh/authorized_keys'

Connect to WIFI
  - wpa_passphrase "testing" "testingPassword" | sudo tee -a /etc/wpa_supplicant/wpa_supplicant.conf > /dev/null 
  - wpa_cli -i wlan0 reconfigure
  - ifconfig wlan0

Intall docker:
  - curl https://get.docker.com/ | sh
  - sudo usermod -aG docker pi

Rename host:
  - sudo nano /etc/hostname
  - sudo nano /etc/hosts
  - sudo reboot

Create swarm
  - docker swarm init
  - join the pi-s
  - check with: docker node ls

# BUILD
Must build by hand or bash file the images on different architecture.

# RUN
TODO

# TODO
