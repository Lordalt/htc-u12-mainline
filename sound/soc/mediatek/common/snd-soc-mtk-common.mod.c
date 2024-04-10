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

KSYMTAB_FUNC(mtk_afe_combine_sub_dai, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_add_sub_dai_control, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_pointer, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_pcm_new, "_gpl", "");
KSYMTAB_DATA(mtk_afe_pcm_platform, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_startup, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_shutdown, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_hw_params, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_hw_free, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_trigger, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_fe_prepare, "_gpl", "");
KSYMTAB_DATA(mtk_afe_fe_ops, "_gpl", "");
KSYMTAB_FUNC(mtk_dynamic_irq_acquire, "_gpl", "");
KSYMTAB_FUNC(mtk_dynamic_irq_release, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_suspend, "_gpl", "");
KSYMTAB_FUNC(mtk_afe_resume, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_enable, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_disable, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_addr, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_channel, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_rate, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_rate_substream, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_format, "_gpl", "");
KSYMTAB_FUNC(mtk_memif_set_pbuf_size, "_gpl", "");
KSYMTAB_FUNC(mtk_sof_dai_link_fixup, "_gpl", "");
KSYMTAB_FUNC(mtk_sof_card_probe, "_gpl", "");
KSYMTAB_FUNC(mtk_sof_card_late_probe, "_gpl", "");
KSYMTAB_FUNC(mtk_sof_dailink_parse_of, "_gpl", "");
KSYMTAB_FUNC(parse_dai_link_info, "_gpl", "");
KSYMTAB_FUNC(clean_card_reference, "_gpl", "");

MODULE_INFO(depends, "");

