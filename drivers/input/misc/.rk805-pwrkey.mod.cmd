savedcmd_drivers/input/misc/rk805-pwrkey.mod := printf '%s\n'   rk805-pwrkey.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/rk805-pwrkey.mod
