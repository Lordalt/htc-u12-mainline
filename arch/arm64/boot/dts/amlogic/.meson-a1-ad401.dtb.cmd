savedcmd_arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.dts.tmp arch/arm64/boot/dts/amlogic/meson-a1-ad401.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb -b 0 -iarch/arm64/boot/dts/amlogic/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg   -d arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.d.dtc.tmp arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.dts.tmp ; cat arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.d.pre.tmp arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.d.dtc.tmp > arch/arm64/boot/dts/amlogic/.meson-a1-ad401.dtb.d

source_arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb := arch/arm64/boot/dts/amlogic/meson-a1-ad401.dts

deps_arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb := \
  arch/arm64/boot/dts/amlogic/meson-a1.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/amlogic,a1-pll-clkc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/amlogic,a1-peripherals-clkc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/meson-a1-gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/power/meson-a1-power.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/amlogic,meson-a1-reset.h \

arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb: $(deps_arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb)

$(deps_arch/arm64/boot/dts/amlogic/meson-a1-ad401.dtb):