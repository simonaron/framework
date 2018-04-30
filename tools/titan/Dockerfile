FROM ubuntu

ARG TITAN_BIN

# Install dependencies
RUN apt-get update
RUN apt-get install curl expect g++ make -y
RUN apt-get install libssl-dev libxml2-dev libncurses5-dev -y
RUN apt-get install flex bison xutils-dev ant xsltproc -y
RUN apt-get install automake perl -y

# Install Titan
ENV TTCN3_DIR /home/TITAN/
RUN mkdir $TTCN3_DIR

COPY ${TITAN_BIN} $TTCN3_DIR/titan.tar.gz
RUN tar zxvf $TTCN3_DIR/titan.tar.gz -C $TTCN3_DIR/

ENV LD_LIBRARY_PATH=/usr/lib/
ENV PATH=$PATH:$TTCN3_DIR/bin/
ENV OPENSSL_DIR=/usr/

