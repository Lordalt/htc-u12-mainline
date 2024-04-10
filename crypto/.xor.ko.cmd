savedcmd_crypto/xor.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o
