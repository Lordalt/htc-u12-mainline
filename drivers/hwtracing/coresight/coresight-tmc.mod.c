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

KSYMTAB_FUNC(tmc_free_sg_table, "_gpl", "");
KSYMTAB_FUNC(tmc_alloc_sg_table, "_gpl", "");
KSYMTAB_FUNC(tmc_sg_table_sync_data_range, "_gpl", "");
KSYMTAB_FUNC(tmc_sg_table_sync_table, "_gpl", "");
KSYMTAB_FUNC(tmc_sg_table_get_data, "_gpl", "");
KSYMTAB_FUNC(tmc_etr_get_catu_device, "_gpl", "");
KSYMTAB_FUNC(tmc_etr_set_catu_ops, "_gpl", "");
KSYMTAB_FUNC(tmc_etr_remove_catu_ops, "_gpl", "");
KSYMTAB_FUNC(tmc_etr_get_buffer, "_gpl", "");

MODULE_INFO(depends, "coresight");

MODULE_ALIAS("amba:d???BB961");
MODULE_ALIAS("amba:d???BB9E8");
MODULE_ALIAS("amba:d???BB9E9");
MODULE_ALIAS("amba:d???BB9EA");