savedcmd_drivers/regulator/tps6594-regulator.mod := printf '%s\n'   tps6594-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/tps6594-regulator.mod
