ARG ARCH
FROM titan_${ARCH}

# Setup Project
COPY ./src/ /home/project/

CMD  cd /home/project/ && \
     ttcn3_makefilegen MyExample.ttcn -f && \
     make && \
     ttcn3_start MyExample MyExample.cfg
