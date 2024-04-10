savedcmd_crypto/cbc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/cbc.ko crypto/cbc.o crypto/cbc.mod.o
