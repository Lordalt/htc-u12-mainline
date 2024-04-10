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

KSYMTAB_FUNC(wwan_get_debugfs_dir, "_gpl", "");
KSYMTAB_FUNC(wwan_put_debugfs_dir, "_gpl", "");
KSYMTAB_FUNC(wwan_create_port, "_gpl", "");
KSYMTAB_FUNC(wwan_remove_port, "_gpl", "");
KSYMTAB_FUNC(wwan_port_rx, "_gpl", "");
KSYMTAB_FUNC(wwan_port_txon, "_gpl", "");
KSYMTAB_FUNC(wwan_port_txoff, "_gpl", "");
KSYMTAB_FUNC(wwan_port_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(wwan_register_ops, "_gpl", "");
KSYMTAB_FUNC(wwan_unregister_ops, "_gpl", "");

MODULE_INFO(depends, "");

