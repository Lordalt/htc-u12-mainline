savedcmd_drivers/counter/rz-mtu3-cnt.mod := printf '%s\n'   rz-mtu3-cnt.o | awk '!x[$$0]++ { print("drivers/counter/"$$0) }' > drivers/counter/rz-mtu3-cnt.mod
