savedcmd_drivers/phy/built-in.a := rm -f drivers/phy/built-in.a;  printf "drivers/phy/%s " phy-core.o phy-core-mipi-dphy.o phy-xgene.o allwinner/built-in.a amlogic/built-in.a broadcom/built-in.a cadence/built-in.a freescale/built-in.a hisilicon/built-in.a ingenic/built-in.a intel/built-in.a lantiq/built-in.a marvell/built-in.a mediatek/built-in.a microchip/built-in.a motorola/built-in.a mscc/built-in.a qualcomm/built-in.a ralink/built-in.a renesas/built-in.a rockchip/built-in.a samsung/built-in.a socionext/built-in.a st/built-in.a starfive/built-in.a sunplus/built-in.a tegra/built-in.a ti/built-in.a xilinx/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/phy/built-in.a