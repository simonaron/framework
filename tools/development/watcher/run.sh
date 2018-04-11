#!/bin/bash

#READE CONFIG FILE
. ./config.cfg

echo ''
echo '##################################################################'
echo '# CHANGE DETECTED'
echo '##################################################################'
echo
echo '# UPLOAD FILES'
echo '------------------------------------------------------------------'
echo
rsync -av --rsh="ssh -p $CONNECTION_PORT" --progress $ABS_LOCAL_DIR/ $CONNECTION_STR:$ABS_REMOTE_DIR
echo
echo '# COMPILE PROJECT'
echo '------------------------------------------------------------------'
echo
ssh -p $CONNECTION_PORT $CONNECTION_STR "
source .profile &&
cd $ABS_REMOTE_DIR/$API_RELATIVE_FOLDER &&
ttcn3_makefilegen -t "$API_NAME"_lib.tpd -f -e "$API_NAME"_Test &&
cd bin && make &&
echo &&
echo '# RUN PROJECT' &&
echo '------------------------------------------------------------------' &&
echo &&
ttcn3_start "$API_NAME"_Test "$API_NAME"_Test.cfg
"


