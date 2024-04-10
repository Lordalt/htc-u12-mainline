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

KSYMTAB_FUNC(cmdq_dev_get_client_reg, "", "");
KSYMTAB_FUNC(cmdq_mbox_create, "", "");
KSYMTAB_FUNC(cmdq_mbox_destroy, "", "");
KSYMTAB_FUNC(cmdq_pkt_create, "", "");
KSYMTAB_FUNC(cmdq_pkt_destroy, "", "");
KSYMTAB_FUNC(cmdq_pkt_write, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_mask, "", "");
KSYMTAB_FUNC(cmdq_pkt_read_s, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_s, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_s_mask, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_s_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_write_s_mask_value, "", "");
KSYMTAB_FUNC(cmdq_pkt_wfe, "", "");
KSYMTAB_FUNC(cmdq_pkt_clear_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_set_event, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll, "", "");
KSYMTAB_FUNC(cmdq_pkt_poll_mask, "", "");
KSYMTAB_FUNC(cmdq_pkt_assign, "", "");
KSYMTAB_FUNC(cmdq_pkt_jump, "", "");
KSYMTAB_FUNC(cmdq_pkt_finalize, "", "");
KSYMTAB_FUNC(cmdq_pkt_flush_async, "", "");

MODULE_INFO(depends, "mtk-cmdq-mailbox");

