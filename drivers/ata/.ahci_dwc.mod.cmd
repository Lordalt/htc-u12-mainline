savedcmd_drivers/ata/ahci_dwc.mod := printf '%s\n'   ahci_dwc.o | awk '!x[$$0]++ { print("drivers/ata/"$$0) }' > drivers/ata/ahci_dwc.mod
