savedcmd_drivers/watchdog/imx7ulp_wdt.mod := printf '%s\n'   imx7ulp_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/imx7ulp_wdt.mod
