savedcmd_net/dsa/tag_brcm.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_brcm.ko net/dsa/tag_brcm.o net/dsa/tag_brcm.mod.o