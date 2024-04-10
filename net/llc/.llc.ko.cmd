savedcmd_net/llc/llc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o
