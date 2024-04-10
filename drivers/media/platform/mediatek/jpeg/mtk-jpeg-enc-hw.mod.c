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

KSYMTAB_FUNC(mtk_jpeg_enc_reset, "_gpl", "");
KSYMTAB_FUNC(mtk_jpeg_enc_get_file_size, "_gpl", "");
KSYMTAB_FUNC(mtk_jpeg_enc_start, "_gpl", "");
KSYMTAB_FUNC(mtk_jpeg_set_enc_src, "_gpl", "");
KSYMTAB_FUNC(mtk_jpeg_set_enc_dst, "_gpl", "");
KSYMTAB_FUNC(mtk_jpeg_set_enc_params, "_gpl", "");

MODULE_INFO(depends, "videobuf2-common,v4l2-mem2mem");

MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgenc-hw");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgenc-hwC*");