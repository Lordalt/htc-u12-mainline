savedcmd_drivers/net/wireless/built-in.a := rm -f drivers/net/wireless/built-in.a;  printf "drivers/net/wireless/%s " admtek/built-in.a ath/built-in.a atmel/built-in.a broadcom/built-in.a cisco/built-in.a intel/built-in.a intersil/built-in.a marvell/built-in.a mediatek/built-in.a microchip/built-in.a purelifi/built-in.a quantenna/built-in.a ralink/built-in.a realtek/built-in.a rsi/built-in.a silabs/built-in.a st/built-in.a ti/built-in.a zydas/built-in.a legacy/built-in.a virtual/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/net/wireless/built-in.a