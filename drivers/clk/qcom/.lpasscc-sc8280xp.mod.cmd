savedcmd_drivers/clk/qcom/lpasscc-sc8280xp.mod := printf '%s\n'   lpasscc-sc8280xp.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/lpasscc-sc8280xp.mod
