savedcmd_arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.dts.tmp arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb -b 0 -iarch/arm64/boot/dts/amlogic/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg   -d arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.d.dtc.tmp arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.dts.tmp ; cat arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.d.pre.tmp arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.d.dtc.tmp > arch/arm64/boot/dts/amlogic/.meson-axg-jethome-jethub-j100.dtb.d

source_arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb := arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dts

deps_arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb := \
  arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j1xx.dtsi \
  arch/arm64/boot/dts/amlogic/meson-axg.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/axg-aoclkc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/axg-audio-clkc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/axg-clkc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/meson-axg-gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/amlogic,meson-axg-audio-arb.h \
  scripts/dtc/include-prefixes/dt-bindings/reset/amlogic,meson-axg-reset.h \
  scripts/dtc/include-prefixes/dt-bindings/power/meson-axg-power.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \

arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb: $(deps_arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb)

$(deps_arch/arm64/boot/dts/amlogic/meson-axg-jethome-jethub-j100.dtb):
