savedcmd_net/can/can-raw.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o net/can/can-raw.ko net/can/can-raw.o net/can/can-raw.mod.o