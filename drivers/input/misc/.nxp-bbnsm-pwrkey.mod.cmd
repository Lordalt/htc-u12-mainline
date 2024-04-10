savedcmd_drivers/input/misc/nxp-bbnsm-pwrkey.mod := printf '%s\n'   nxp-bbnsm-pwrkey.o | awk '!x[$$0]++ { print("drivers/input/misc/"$$0) }' > drivers/input/misc/nxp-bbnsm-pwrkey.mod
