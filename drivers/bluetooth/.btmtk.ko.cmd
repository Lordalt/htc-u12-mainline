savedcmd_drivers/bluetooth/btmtk.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/bluetooth/btmtk.ko drivers/bluetooth/btmtk.o drivers/bluetooth/btmtk.mod.o