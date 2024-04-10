savedcmd_drivers/rtc/rtc-nxp-bbnsm.mod := printf '%s\n'   rtc-nxp-bbnsm.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-nxp-bbnsm.mod
