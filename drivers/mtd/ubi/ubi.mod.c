#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ubi_do_get_device_info, "_gpl", "");
KSYMTAB_FUNC(ubi_get_device_info, "_gpl", "");
KSYMTAB_FUNC(ubi_get_volume_info, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume_nm, "_gpl", "");
KSYMTAB_FUNC(ubi_open_volume_path, "_gpl", "");
KSYMTAB_FUNC(ubi_close_volume, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_read, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_read_sg, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_write, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_change, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_erase, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_unmap, "_gpl", "");
KSYMTAB_FUNC(ubi_leb_map, "_gpl", "");
KSYMTAB_FUNC(ubi_is_mapped, "_gpl", "");
KSYMTAB_FUNC(ubi_sync, "_gpl", "");
KSYMTAB_FUNC(ubi_flush, "_gpl", "");
KSYMTAB_FUNC(ubi_register_volume_notifier, "_gpl", "");
KSYMTAB_FUNC(ubi_unregister_volume_notifier, "_gpl", "");

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77381A2AEC4D3FC3DBAD77A");
