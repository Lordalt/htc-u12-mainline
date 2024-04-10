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

KSYMTAB_FUNC(vsp1_du_init, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_setup_lif, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_atomic_begin, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_atomic_update, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_atomic_flush, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_map_sg, "_gpl", "");
KSYMTAB_FUNC(vsp1_du_unmap_sg, "_gpl", "");

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rcar-fcp,videobuf2-dma-contig,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Crenesas,vsp1");
MODULE_ALIAS("of:N*T*Crenesas,vsp1C*");
MODULE_ALIAS("of:N*T*Crenesas,vsp2");
MODULE_ALIAS("of:N*T*Crenesas,vsp2C*");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-vsp2");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-vsp2C*");