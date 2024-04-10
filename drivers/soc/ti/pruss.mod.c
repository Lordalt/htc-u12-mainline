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

KSYMTAB_FUNC(pruss_get, "_gpl", "");
KSYMTAB_FUNC(pruss_put, "_gpl", "");
KSYMTAB_FUNC(pruss_request_mem_region, "_gpl", "");
KSYMTAB_FUNC(pruss_release_mem_region, "_gpl", "");
KSYMTAB_FUNC(pruss_cfg_get_gpmux, "_gpl", "");
KSYMTAB_FUNC(pruss_cfg_set_gpmux, "_gpl", "");
KSYMTAB_FUNC(pruss_cfg_gpimode, "_gpl", "");
KSYMTAB_FUNC(pruss_cfg_miirt_enable, "_gpl", "");
KSYMTAB_FUNC(pruss_cfg_xfr_enable, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3356-pruss");
MODULE_ALIAS("of:N*T*Cti,am3356-prussC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0C*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1C*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss");
MODULE_ALIAS("of:N*T*Cti,am5728-prussC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss");
MODULE_ALIAS("of:N*T*Cti,k2g-prussC*");
MODULE_ALIAS("of:N*T*Cti,am654-icssg");
MODULE_ALIAS("of:N*T*Cti,am654-icssgC*");
MODULE_ALIAS("of:N*T*Cti,j721e-icssg");
MODULE_ALIAS("of:N*T*Cti,j721e-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am642-icssg");
MODULE_ALIAS("of:N*T*Cti,am642-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am625-pruss");
MODULE_ALIAS("of:N*T*Cti,am625-prussC*");
