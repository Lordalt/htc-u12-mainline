savedcmd_drivers/clk/zynqmp/built-in.a := rm -f drivers/clk/zynqmp/built-in.a;  printf "drivers/clk/zynqmp/%s " pll.o clk-gate-zynqmp.o divider.o clk-mux-zynqmp.o clkc.o | xargs aarch64-linux-gnu-ar cDPrST drivers/clk/zynqmp/built-in.a