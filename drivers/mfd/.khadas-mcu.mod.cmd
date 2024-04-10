savedcmd_drivers/mfd/khadas-mcu.mod := printf '%s\n'   khadas-mcu.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/khadas-mcu.mod
