savedcmd_arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo := gcc -E -Wp,-MMD,arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.dts.tmp arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtso ; ./scripts/dtc/dtc -o arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo -b 0 -iarch/arm64/boot/dts/renesas/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unique_unit_address -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg   -d arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.d.dtc.tmp arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.dts.tmp ; cat arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.d.pre.tmp arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.d.dtc.tmp > arch/arm64/boot/dts/renesas/.r9a07g043-smarc-pmod.dtbo.d

source_arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo := arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtso

deps_arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo := \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/rzg2l-pinctrl.h \

arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo: $(deps_arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo)

$(deps_arch/arm64/boot/dts/renesas/r9a07g043-smarc-pmod.dtbo):