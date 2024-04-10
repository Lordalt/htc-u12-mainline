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

KSYMTAB_FUNC(mt6358_set_mtkaif_protocol, "_gpl", "");
KSYMTAB_FUNC(mt6358_mtkaif_calibration_enable, "_gpl", "");
KSYMTAB_FUNC(mt6358_mtkaif_calibration_disable, "_gpl", "");
KSYMTAB_FUNC(mt6358_set_mtkaif_calibration_phase, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6358-sound");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-soundC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-sound");
MODULE_ALIAS("of:N*T*Cmediatek,mt6366-soundC*");