savedcmd_drivers/built-in.a := rm -f drivers/built-in.a;  printf "drivers/%s " cache/built-in.a irqchip/built-in.a bus/built-in.a phy/built-in.a pinctrl/built-in.a gpio/built-in.a pwm/built-in.a pci/built-in.a video/built-in.a idle/built-in.a char/ipmi/built-in.a acpi/built-in.a pnp/built-in.a amba/built-in.a clk/built-in.a dma/built-in.a soc/built-in.a pmdomain/built-in.a virtio/built-in.a xen/built-in.a regulator/built-in.a reset/built-in.a tty/built-in.a char/built-in.a iommu/built-in.a gpu/built-in.a base/built-in.a block/built-in.a misc/built-in.a mfd/built-in.a nfc/built-in.a dax/built-in.a dma-buf/built-in.a cxl/built-in.a macintosh/built-in.a scsi/built-in.a nvme/built-in.a ata/built-in.a mtd/built-in.a spi/built-in.a spmi/built-in.a net/built-in.a firewire/built-in.a vfio/built-in.a cdrom/built-in.a auxdisplay/built-in.a usb/built-in.a input/serio/built-in.a input/built-in.a rtc/built-in.a i2c/built-in.a i3c/built-in.a media/built-in.a pps/built-in.a ptp/built-in.a power/built-in.a hwmon/built-in.a thermal/built-in.a watchdog/built-in.a md/built-in.a edac/built-in.a opp/built-in.a cpufreq/built-in.a cpuidle/built-in.a mmc/built-in.a ufs/built-in.a leds/built-in.a firmware/built-in.a crypto/built-in.a clocksource/built-in.a hid/built-in.a of/built-in.a staging/built-in.a platform/built-in.a mailbox/built-in.a hwspinlock/built-in.a remoteproc/built-in.a rpmsg/built-in.a devfreq/built-in.a extcon/built-in.a memory/built-in.a iio/built-in.a perf/built-in.a ras/built-in.a hwtracing/intel_th/built-in.a android/built-in.a nvmem/built-in.a fpga/built-in.a tee/built-in.a mux/built-in.a interconnect/built-in.a hte/built-in.a | xargs aarch64-linux-gnu-ar cDPrST drivers/built-in.a