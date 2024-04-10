savedcmd_drivers/thermal/k3_bandgap.mod := printf '%s\n'   k3_bandgap.o | awk '!x[$$0]++ { print("drivers/thermal/"$$0) }' > drivers/thermal/k3_bandgap.mod
