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

KSYMTAB_FUNC(rt5645_sel_asrc_clk_src, "_gpl", "");
KSYMTAB_FUNC(rt5645_set_jack_detect, "_gpl", "");

MODULE_INFO(depends, "snd-soc-rl6231");

MODULE_ALIAS("i2c:rt5645");
MODULE_ALIAS("i2c:rt5650");
MODULE_ALIAS("acpi*:10EC5645:*");
MODULE_ALIAS("acpi*:10EC5648:*");
MODULE_ALIAS("acpi*:10EC5650:*");
MODULE_ALIAS("acpi*:10EC5640:*");
MODULE_ALIAS("acpi*:10EC3270:*");
MODULE_ALIAS("of:N*T*Crealtek,rt5645");
MODULE_ALIAS("of:N*T*Crealtek,rt5645C*");
MODULE_ALIAS("of:N*T*Crealtek,rt5650");
MODULE_ALIAS("of:N*T*Crealtek,rt5650C*");