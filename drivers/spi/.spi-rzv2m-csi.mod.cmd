savedcmd_drivers/spi/spi-rzv2m-csi.mod := printf '%s\n'   spi-rzv2m-csi.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-rzv2m-csi.mod
