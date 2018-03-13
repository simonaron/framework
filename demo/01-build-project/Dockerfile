FROM ubuntu

# Install dependencies
RUN apt-get update
RUN apt-get install curl expect g++ make -y
RUN apt-get install libssl-dev libxml2-dev libncurses5-dev -y
RUN apt-get install flex bison xutils-dev ant xsltproc -y
RUN apt-get install automake perl -y

# Install Titan
ENV TTCN3_DIR /home/TITAN/
RUN mkdir $TTCN3_DIR

COPY ./titan_x64.tar.gz $TTCN3_DIR/titan.tar.gz
RUN tar zxvf $TTCN3_DIR/titan.tar.gz -C $TTCN3_DIR/

ENV LD_LIBRARY_PATH=/usr/lib/
ENV PATH=$PATH:$TTCN3_DIR/bin/
ENV OPENSSL_DIR=/usr/

# Setup Project
CoPY ./src/ /home/project/

CMD cd /home/project/ && \
    ttcn3_makefilegen MyExample.ttcn PCOType.cc PCOType.hh -f && \
    make && \
    ttcn3_start MyExample MyExample.cfg
