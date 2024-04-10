savedcmd_drivers/ufs/host/ti-j721e-ufs.mod := printf '%s\n'   ti-j721e-ufs.o | awk '!x[$$0]++ { print("drivers/ufs/host/"$$0) }' > drivers/ufs/host/ti-j721e-ufs.mod
