savedcmd_drivers/misc/tps6594-esm.mod := printf '%s\n'   tps6594-esm.o | awk '!x[$$0]++ { print("drivers/misc/"$$0) }' > drivers/misc/tps6594-esm.mod
