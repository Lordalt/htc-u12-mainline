savedcmd_drivers/watchdog/rti_wdt.mod := printf '%s\n'   rti_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/rti_wdt.mod
