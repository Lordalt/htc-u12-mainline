savedcmd_arch/arm64/include/generated/asm/cpucap-defs.h := mkdir -p arch/arm64/include/generated/asm/; awk -f arch/arm64/tools/gen-cpucaps.awk arch/arm64/tools/cpucaps > arch/arm64/include/generated/asm/cpucap-defs.h