savedcmd_drivers/ufs/host/cdns-pltfrm.mod := printf '%s\n'   cdns-pltfrm.o | awk '!x[$$0]++ { print("drivers/ufs/host/"$$0) }' > drivers/ufs/host/cdns-pltfrm.mod
