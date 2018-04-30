# README
Make flexible tool for build and run paralell Titan project over docker swarm support more architecture.

## SETTING UP DEVICES
https://github.com/simonaron/framework/tree/master/demo/04-paralell-raspberry

## BUILD AND RUN

### Generate yml from builde-config.json
cd /framework/tools/builder
node index.js ../../demo/06-generate-dockerfiles/

### Build
(from actual demo)
cat build.sh | sh

## TODO
- create configuration file
  - use it in build.sh
  - use it for generate docker-compose.yml

- support make from last build and rebuild all

- support multiple project parralell run in one swarm
  - use semaphore for running + (imagename prefix, servicename prefix)
