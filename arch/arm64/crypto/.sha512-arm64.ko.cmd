savedcmd_arch/arm64/crypto/sha512-arm64.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o arch/arm64/crypto/sha512-arm64.ko arch/arm64/crypto/sha512-arm64.o arch/arm64/crypto/sha512-arm64.mod.o