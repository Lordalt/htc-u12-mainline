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

KSYMTAB_FUNC(samsung_dsim_probe, "_gpl", "");
KSYMTAB_FUNC(samsung_dsim_remove, "_gpl", "");
KSYMTAB_DATA(samsung_dsim_pm_ops, "_gpl", "");

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-dsim");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-dsimC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-mipi-dsim");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-mipi-dsimC*");