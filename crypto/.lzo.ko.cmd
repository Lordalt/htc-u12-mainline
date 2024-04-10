savedcmd_crypto/lzo.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/lzo.ko crypto/lzo.o crypto/lzo.mod.o
