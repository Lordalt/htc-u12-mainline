savedcmd_drivers/net/mdio/mdio-regmap.mod := printf '%s\n'   mdio-regmap.o | awk '!x[$$0]++ { print("drivers/net/mdio/"$$0) }' > drivers/net/mdio/mdio-regmap.mod
