savedcmd_drivers/pinctrl/sunxi/built-in.a := rm -f drivers/pinctrl/sunxi/built-in.a;  printf "drivers/pinctrl/sunxi/%s " pinctrl-sunxi.o pinctrl-sun50i-a64.o pinctrl-sun50i-a64-r.o pinctrl-sun50i-a100.o pinctrl-sun50i-a100-r.o pinctrl-sun8i-h3-r.o pinctrl-sun50i-h5.o pinctrl-sun50i-h6.o pinctrl-sun50i-h6-r.o pinctrl-sun50i-h616.o pinctrl-sun50i-h616-r.o | xargs aarch64-linux-gnu-ar cDPrST drivers/pinctrl/sunxi/built-in.a