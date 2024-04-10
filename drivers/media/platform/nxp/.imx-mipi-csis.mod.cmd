savedcmd_drivers/media/platform/nxp/imx-mipi-csis.mod := printf '%s\n'   imx-mipi-csis.o | awk '!x[$$0]++ { print("drivers/media/platform/nxp/"$$0) }' > drivers/media/platform/nxp/imx-mipi-csis.mod
