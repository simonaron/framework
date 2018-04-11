
# READE CONFIG FILE
. ./config.cfg

# HELLO USER!
echo '##################################################################'
echo '# WATCHER STARTED'
echo '# ----------------------------------------------------------------'


# START WATCHING
onchange "$ABS_LOCAL_DIR/**/*" -p 300 -- cat run.sh | sh
