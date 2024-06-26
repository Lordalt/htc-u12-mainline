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

KSYMTAB_FUNC(cdc_ncm_change_mtu, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_bind_common, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_unbind, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_select_altsetting, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_fill_tx_frame, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_tx_fixup, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth16, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_nth32, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp16, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_verify_ndp32, "_gpl", "");
KSYMTAB_FUNC(cdc_ncm_rx_fixup, "_gpl", "");

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
