savedcmd_drivers/input/keyboard/mtk-pmic-keys.mod := printf '%s\n'   mtk-pmic-keys.o | awk '!x[$$0]++ { print("drivers/input/keyboard/"$$0) }' > drivers/input/keyboard/mtk-pmic-keys.mod
