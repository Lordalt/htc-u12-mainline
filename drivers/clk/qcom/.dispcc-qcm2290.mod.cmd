savedcmd_drivers/clk/qcom/dispcc-qcm2290.mod := printf '%s\n'   dispcc-qcm2290.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/dispcc-qcm2290.mod
