savedcmd_net/bridge/br_netfilter.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/bridge/br_netfilter.ko net/bridge/br_netfilter.o net/bridge/br_netfilter.mod.o