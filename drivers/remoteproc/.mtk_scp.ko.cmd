savedcmd_drivers/remoteproc/mtk_scp.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/remoteproc/mtk_scp.ko drivers/remoteproc/mtk_scp.o drivers/remoteproc/mtk_scp.mod.o