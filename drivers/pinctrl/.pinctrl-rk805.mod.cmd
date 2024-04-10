savedcmd_drivers/pinctrl/pinctrl-rk805.mod := printf '%s\n'   pinctrl-rk805.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-rk805.mod
