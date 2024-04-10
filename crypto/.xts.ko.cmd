savedcmd_crypto/xts.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o
