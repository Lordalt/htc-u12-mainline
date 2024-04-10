savedcmd_drivers/soc/imx/built-in.a := rm -f drivers/soc/imx/built-in.a;  printf "drivers/soc/imx/%s " soc-imx8m.o imx93-src.o | xargs aarch64-linux-gnu-ar cDPrST drivers/soc/imx/built-in.a
