savedcmd_drivers/clk/qcom/built-in.a := rm -f drivers/clk/qcom/built-in.a;  printf "drivers/clk/qcom/%s " common.o clk-regmap.o clk-alpha-pll.o clk-pll.o clk-rcg.o clk-rcg2.o clk-branch.o clk-regmap-divider.o clk-regmap-mux.o clk-regmap-mux-div.o clk-regmap-phy-mux.o clk-hfpll.o reset.o gdsc.o apss-ipq-pll.o apss-ipq6018.o gcc-ipq5018.o gcc-ipq5332.o gcc-ipq6018.o gcc-ipq8074.o gcc-ipq9574.o gcc-msm8916.o gcc-msm8994.o gcc-msm8996.o gcc-msm8998.o a53-pll.o apcs-msm8916.o apcs-msm8996.o clk-cpu-8996.o clk-cbf-8996.o clk-rpmh.o clk-smd-rpm.o gcc-qcm2290.o gcc-qcs404.o gcc-sa8775p.o gcc-sc7180.o gcc-sc7280.o gcc-sc8180x.o gcc-sc8280xp.o dispcc-sdm845.o gcc-sdm845.o gpucc-sdm845.o videocc-sdm845.o dispcc-sm8250.o gcc-sm6115.o gcc-sm8150.o gcc-sm8250.o gcc-sm8350.o gcc-sm8450.o gcc-sm8550.o gpucc-sm8150.o gpucc-sm8250.o tcsrcc-sm8550.o videocc-sm8250.o hfpll.o | xargs aarch64-linux-gnu-ar cDPrST drivers/clk/qcom/built-in.a