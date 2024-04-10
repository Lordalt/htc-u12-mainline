savedcmd_drivers/interconnect/qcom/qnoc-qcm2290.mod := printf '%s\n'   qcm2290.o | awk '!x[$$0]++ { print("drivers/interconnect/qcom/"$$0) }' > drivers/interconnect/qcom/qnoc-qcm2290.mod
