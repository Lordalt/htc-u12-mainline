savedcmd_drivers/soc/ti/pruss.mod := printf '%s\n'   pruss.o | awk '!x[$$0]++ { print("drivers/soc/ti/"$$0) }' > drivers/soc/ti/pruss.mod
