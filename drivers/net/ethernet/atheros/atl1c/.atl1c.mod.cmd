savedcmd_drivers/net/ethernet/atheros/atl1c/atl1c.mod := printf '%s\n'   atl1c_main.o atl1c_hw.o atl1c_ethtool.o | awk '!x[$$0]++ { print("drivers/net/ethernet/atheros/atl1c/"$$0) }' > drivers/net/ethernet/atheros/atl1c/atl1c.mod