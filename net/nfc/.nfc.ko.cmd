savedcmd_net/nfc/nfc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o