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

KSYMTAB_FUNC(mt7921_rx_check, "_gpl", "");
KSYMTAB_FUNC(mt7921_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt7921_usb_sdio_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt7921_usb_sdio_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7921_usb_sdio_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt7921_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt7921_run_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7921_mcu_set_eeprom, "_gpl", "");
KSYMTAB_FUNC(__mt7921_start, "_gpl", "");
KSYMTAB_FUNC(mt7921_mac_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt7921_mac_sta_assoc, "_gpl", "");
KSYMTAB_FUNC(mt7921_mac_sta_remove, "_gpl", "");
KSYMTAB_DATA(mt7921_ops, "_gpl", "");
KSYMTAB_FUNC(mt7921_mac_init, "_gpl", "");
KSYMTAB_FUNC(mt7921_register_device, "_gpl", "");

MODULE_INFO(depends, "mt76-connac-lib,mac80211,mt792x-lib,mt76,cfg80211");
