savedcmd_drivers/pci/controller/pcie-mediatek-gen3.mod := printf '%s\n'   pcie-mediatek-gen3.o | awk '!x[$$0]++ { print("drivers/pci/controller/"$$0) }' > drivers/pci/controller/pcie-mediatek-gen3.mod