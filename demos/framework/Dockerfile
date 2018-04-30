ARG ARCH
FROM titan_${ARCH}

# Setup Project
COPY . /home/project/

WORKDIR /home/project/demos/framework/
RUN ttcn3_makefilegen -t demo_FRAMEWORK.tpd -f -e FRAMEWORK_Test

WORKDIR /home/project/demos/framework/bin/
RUN make