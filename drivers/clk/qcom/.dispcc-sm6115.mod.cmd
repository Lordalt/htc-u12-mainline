savedcmd_drivers/clk/qcom/dispcc-sm6115.mod := printf '%s\n'   dispcc-sm6115.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-sm6115.mod
