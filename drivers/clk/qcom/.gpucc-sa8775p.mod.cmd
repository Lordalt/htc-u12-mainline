savedcmd_drivers/clk/qcom/gpucc-sa8775p.mod := printf '%s\n'   gpucc-sa8775p.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/gpucc-sa8775p.mod
