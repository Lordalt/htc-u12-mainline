savedcmd_arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb := gcc -E -Wp,-MMD,arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.dts.tmp arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dts ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb -b 0 -iarch/arm64/boot/dts/freescale/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg   -d arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.d.dtc.tmp arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.dts.tmp ; cat arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.d.pre.tmp arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.d.dtc.tmp > arch/arm64/boot/dts/freescale/.fsl-ls1088a-tqmls1088a-mbls10xxa.dtb.d

source_arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb := arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dts

deps_arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a.dtsi \
  arch/arm64/boot/dts/freescale/fsl-ls1088a.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/fsl,qoriq-clockgen.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/freescale/tqmls10xxa.dtsi \
  arch/arm64/boot/dts/freescale/tqmls10xxa-mbls10xxa.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  scripts/dtc/include-prefixes/dt-bindings/leds/common.h \
  arch/arm64/boot/dts/freescale/tqmls1088a-mbls10xxa-mc.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/net/ti-dp83867.h \

arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb: $(deps_arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb)

$(deps_arch/arm64/boot/dts/freescale/fsl-ls1088a-tqmls1088a-mbls10xxa.dtb):
