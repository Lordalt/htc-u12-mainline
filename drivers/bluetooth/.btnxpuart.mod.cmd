savedcmd_drivers/bluetooth/btnxpuart.mod := printf '%s\n'   btnxpuart.o | awk '!x[$$0]++ { print("drivers/bluetooth/"$$0) }' > drivers/bluetooth/btnxpuart.mod
