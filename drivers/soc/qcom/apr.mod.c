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

KSYMTAB_FUNC(apr_send_pkt, "_gpl", "");
KSYMTAB_FUNC(gpr_free_port, "_gpl", "");
KSYMTAB_FUNC(gpr_alloc_port, "_gpl", "");
KSYMTAB_FUNC(gpr_send_pkt, "_gpl", "");
KSYMTAB_FUNC(gpr_send_port_pkt, "_gpl", "");
KSYMTAB_DATA(aprbus, "_gpl", "");
KSYMTAB_FUNC(__apr_driver_register, "_gpl", "");
KSYMTAB_FUNC(apr_driver_unregister, "_gpl", "");

MODULE_INFO(depends, "pdr_interface");

MODULE_ALIAS("of:N*T*Cqcom,apr");
MODULE_ALIAS("of:N*T*Cqcom,aprC*");
MODULE_ALIAS("of:N*T*Cqcom,apr-v2");
MODULE_ALIAS("of:N*T*Cqcom,apr-v2C*");
MODULE_ALIAS("of:N*T*Cqcom,gpr");
MODULE_ALIAS("of:N*T*Cqcom,gprC*");