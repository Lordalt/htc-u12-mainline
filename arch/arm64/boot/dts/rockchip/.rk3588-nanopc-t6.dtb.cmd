savedcmd_arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.dts.tmp arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb -b 0 -iarch/arm64/boot/dts/rockchip/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg   -d arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.d.dtc.tmp arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.dts.tmp ; cat arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.d.pre.tmp arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.d.dtc.tmp > arch/arm64/boot/dts/rockchip/.rk3588-nanopc-t6.dtb.d

source_arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb := arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dts

deps_arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/rockchip.h \
  scripts/dtc/include-prefixes/dt-bindings/usb/pd.h \
  arch/arm64/boot/dts/rockchip/rk3588.dtsi \
  arch/arm64/boot/dts/rockchip/rk3588s.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/rockchip,rk3588-cru.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/power/rk3588-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/rockchip,rk3588-cru.h \
  scripts/dtc/include-prefixes/dt-bindings/phy/phy.h \
  scripts/dtc/include-prefixes/dt-bindings/ata/ahci.h \
  arch/arm64/boot/dts/rockchip/rk3588s-pinctrl.dtsi \
  arch/arm64/boot/dts/rockchip/rockchip-pinconf.dtsi \
  arch/arm64/boot/dts/rockchip/rk3588-pinctrl.dtsi \

arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb: $(deps_arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb)

$(deps_arch/arm64/boot/dts/rockchip/rk3588-nanopc-t6.dtb):
