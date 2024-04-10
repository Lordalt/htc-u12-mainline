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

KSYMTAB_DATA(rsi_zone_enabled, "_gpl", "");
KSYMTAB_FUNC(rsi_dbg, "_gpl", "");
KSYMTAB_FUNC(rsi_read_pkt, "_gpl", "");
KSYMTAB_FUNC(rsi_91x_init, "_gpl", "");
KSYMTAB_FUNC(rsi_91x_deinit, "_gpl", "");
KSYMTAB_FUNC(rsi_mac80211_detach, "_gpl", "");
KSYMTAB_FUNC(rsi_config_wowlan, "", "");
KSYMTAB_FUNC(rsi_hal_device_init, "_gpl", "");
KSYMTAB_FUNC(rsi_init_dbgfs, "_gpl", "");
KSYMTAB_FUNC(rsi_remove_dbgfs, "_gpl", "");

MODULE_INFO(depends, "mac80211,btrsi,rfkill,cfg80211");


MODULE_INFO(srcversion, "2FD924EFB1DC2678DC70389");
