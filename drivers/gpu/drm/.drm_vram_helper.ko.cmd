savedcmd_drivers/gpu/drm/drm_vram_helper.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o drivers/gpu/drm/drm_vram_helper.ko drivers/gpu/drm/drm_vram_helper.o drivers/gpu/drm/drm_vram_helper.mod.o