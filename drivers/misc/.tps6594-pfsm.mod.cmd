savedcmd_drivers/misc/tps6594-pfsm.mod := printf '%s\n'   tps6594-pfsm.o | awk '!x[$$0]++ { print("drivers/misc/"$$0) }' > drivers/misc/tps6594-pfsm.mod
