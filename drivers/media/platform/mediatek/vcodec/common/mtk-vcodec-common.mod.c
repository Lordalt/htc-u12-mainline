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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(mtk_vcodec_wait_for_done_ctx, "", "");
KSYMTAB_DATA(mtk_vcodec_dbg, "", "");
KSYMTAB_DATA(mtk_v4l2_dbg_level, "", "");
KSYMTAB_FUNC(mtk_vcodec_get_reg_addr, "", "");
KSYMTAB_FUNC(mtk_vcodec_write_vdecsys, "", "");
KSYMTAB_FUNC(mtk_vcodec_mem_alloc, "", "");
KSYMTAB_FUNC(mtk_vcodec_mem_free, "", "");
KSYMTAB_FUNC(mtk_vcodec_get_hw_dev, "", "");
KSYMTAB_FUNC(mtk_vcodec_set_curr_ctx, "", "");
KSYMTAB_FUNC(mtk_vcodec_get_curr_ctx, "", "");
KSYMTAB_FUNC(mtk_vcodec_fw_select, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_release, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_load_firmware, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_get_vdec_capa, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_get_venc_capa, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_map_dm_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_ipi_register, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_ipi_send, "_gpl", "");
KSYMTAB_FUNC(mtk_vcodec_fw_get_type, "_gpl", "");

MODULE_INFO(depends, "mtk_scp,mtk_scp_ipi");

