savedcmd_drivers/thermal/imx_sc_thermal.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/thermal/imx_sc_thermal.ko drivers/thermal/imx_sc_thermal.o drivers/thermal/imx_sc_thermal.mod.o