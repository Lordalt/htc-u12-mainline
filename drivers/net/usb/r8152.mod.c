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

KSYMTAB_FUNC(rtl8152_get_version, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0C5Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pB301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1976d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B06C184D8819E9CEACE873C");