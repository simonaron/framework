ARG ARCH
FROM titan_${ARCH}

# Setup Project
COPY ./app/ /home/project/

RUN  cd /home/project/ && \
     ttcn3_makefilegen -t project.tpd -f && \
     cd ./bin/ && \
     make

WORKDIR /home/project/bin/
