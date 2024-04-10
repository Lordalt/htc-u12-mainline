savedcmd_drivers/nvmem/layouts/sl28vpd.mod := printf '%s\n'   sl28vpd.o | awk '!x[$$0]++ { print("drivers/nvmem/layouts/"$$0) }' > drivers/nvmem/layouts/sl28vpd.mod
