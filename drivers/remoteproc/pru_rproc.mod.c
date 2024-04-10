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

KSYMTAB_FUNC(pru_rproc_get, "_gpl", "");
KSYMTAB_FUNC(pru_rproc_put, "_gpl", "");
KSYMTAB_FUNC(pru_rproc_set_ctable, "_gpl", "");

MODULE_INFO(depends, "pruss");

MODULE_ALIAS("of:N*T*Cti,am3356-pru");
MODULE_ALIAS("of:N*T*Cti,am3356-pruC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pru");
MODULE_ALIAS("of:N*T*Cti,am4376-pruC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pru");
MODULE_ALIAS("of:N*T*Cti,am5728-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-pru");
MODULE_ALIAS("of:N*T*Cti,am642-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-rtu");
MODULE_ALIAS("of:N*T*Cti,am642-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pru");
MODULE_ALIAS("of:N*T*Cti,k2g-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-pru");
MODULE_ALIAS("of:N*T*Cti,am654-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-rtu");
MODULE_ALIAS("of:N*T*Cti,am654-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-rtu");
MODULE_ALIAS("of:N*T*Cti,j721e-rtuC*");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,am625-pru");
MODULE_ALIAS("of:N*T*Cti,am625-pruC*");
