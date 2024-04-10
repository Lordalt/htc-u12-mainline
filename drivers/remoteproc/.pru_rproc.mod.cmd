savedcmd_drivers/remoteproc/pru_rproc.mod := printf '%s\n'   pru_rproc.o | awk '!x[$$0]++ { print("drivers/remoteproc/"$$0) }' > drivers/remoteproc/pru_rproc.mod
