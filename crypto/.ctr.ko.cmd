savedcmd_crypto/ctr.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o
