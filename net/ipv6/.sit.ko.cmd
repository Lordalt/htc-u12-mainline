savedcmd_net/ipv6/sit.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/ipv6/sit.ko net/ipv6/sit.o net/ipv6/sit.mod.o
