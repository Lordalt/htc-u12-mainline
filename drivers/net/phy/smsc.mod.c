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

KSYMTAB_FUNC(smsc_phy_config_intr, "_gpl", "");
KSYMTAB_FUNC(smsc_phy_handle_interrupt, "_gpl", "");
KSYMTAB_FUNC(smsc_phy_config_init, "_gpl", "");
KSYMTAB_FUNC(lan87xx_read_status, "_gpl", "");
KSYMTAB_FUNC(smsc_phy_get_tunable, "_gpl", "");
KSYMTAB_FUNC(smsc_phy_set_tunable, "_gpl", "");
KSYMTAB_FUNC(smsc_phy_probe, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");
MODULE_ALIAS("mdio:0000000000000111110000010011??0?");