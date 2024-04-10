savedcmd_drivers/nvmem/nvmem-imx-ocotp-ele.mod := printf '%s\n'   imx-ocotp-ele.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/nvmem-imx-ocotp-ele.mod
