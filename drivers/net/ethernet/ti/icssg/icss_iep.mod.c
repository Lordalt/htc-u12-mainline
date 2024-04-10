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

KSYMTAB_FUNC(icss_iep_get_count_hi, "_gpl", "");
KSYMTAB_FUNC(icss_iep_get_count_low, "_gpl", "");
KSYMTAB_FUNC(icss_iep_get_ptp_clock_idx, "_gpl", "");
KSYMTAB_FUNC(icss_iep_get_idx, "_gpl", "");
KSYMTAB_FUNC(icss_iep_get, "_gpl", "");
KSYMTAB_FUNC(icss_iep_put, "_gpl", "");
KSYMTAB_FUNC(icss_iep_init_fw, "_gpl", "");
KSYMTAB_FUNC(icss_iep_exit_fw, "_gpl", "");
KSYMTAB_FUNC(icss_iep_init, "_gpl", "");
KSYMTAB_FUNC(icss_iep_exit, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am654-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am654-icss-iepC*");
