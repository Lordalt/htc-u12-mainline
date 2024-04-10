savedcmd_drivers/soc/bcm/built-in.a := rm -f drivers/soc/bcm/built-in.a;  printf "drivers/soc/bcm/%s " brcmstb/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/soc/bcm/built-in.a
