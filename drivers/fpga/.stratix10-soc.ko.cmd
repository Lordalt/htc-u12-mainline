savedcmd_drivers/fpga/stratix10-soc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/fpga/stratix10-soc.ko drivers/fpga/stratix10-soc.o drivers/fpga/stratix10-soc.mod.o