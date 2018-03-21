ARG ARCH
FROM titan_${ARCH}

# Setup Project
COPY ./app/ /home/project/


WORKDIR /home/project/
RUN ttcn3_makefilegen -t project.tpd -f


WORKDIR /home/project/bin/
RUN make
