savedcmd_drivers/irqchip/built-in.a := rm -f drivers/irqchip/built-in.a;  printf "drivers/irqchip/%s " irqchip.o irq-alpine-msi.o irq-bcm2835.o irq-bcm2836.o irq-owl-sirq.o irq-tegra.o irq-dw-apb-ictl.o irq-sun6i-r.o irq-sunxi-nmi.o irq-gic.o irq-gic-common.o irq-gic-pm.o irq-gic-v2m.o irq-gic-v3.o irq-gic-v3-mbi.o irq-gic-v3-its.o irq-gic-v3-its-platform-msi.o irq-gic-v4.o irq-gic-v3-its-pci-msi.o irq-gic-v3-its-fsl-mc-msi.o irq-partition-percpu.o irq-mbigen.o irq-renesas-irqc.o irq-renesas-rzg2l.o irq-bcm7038-l1.o irq-bcm7120-l2.o irq-brcmstb-l2.o irq-mtk-sysirq.o irq-mtk-cirq.o irq-imx-gpcv2.o irq-mvebu-gicp.o irq-mvebu-icu.o irq-mvebu-odmi.o irq-mvebu-pic.o irq-mvebu-sei.o irq-ls-extirq.o irq-ls-scfg-msi.o qcom-irq-combiner.o irq-uniphier-aidet.o irq-sni-exiu.o irq-meson-gpio.o qcom-pdc.o irq-qcom-mpm.o irq-imx-irqsteer.o irq-imx-intmux.o irq-ti-sci-intr.o irq-ti-sci-inta.o irq-mst-intc.o irq-sl28cpld.o irq-apple-aic.o | xargs aarch64-linux-gnu-ar cDPrST drivers/irqchip/built-in.a