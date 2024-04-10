savedcmd_drivers/thermal/khadas_mcu_fan.mod := printf '%s\n'   khadas_mcu_fan.o | awk '!x[$$0]++ { print("drivers/thermal/"$$0) }' > drivers/thermal/khadas_mcu_fan.mod
