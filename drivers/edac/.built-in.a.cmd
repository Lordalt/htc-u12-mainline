savedcmd_drivers/edac/built-in.a := rm -f drivers/edac/built-in.a;  printf "drivers/edac/%s " edac_mc.o edac_device.o edac_mc_sysfs.o edac_module.o edac_device_sysfs.o wq.o edac_pci.o edac_pci_sysfs.o ghes_edac.o | xargs aarch64-linux-gnu-ar cDPrST drivers/edac/built-in.a