savedcmd_drivers/media/dvb-core/dvb-core.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/media/dvb-core/dvb-core.ko drivers/media/dvb-core/dvb-core.o drivers/media/dvb-core/dvb-core.mod.o