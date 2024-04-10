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

KSYMTAB_FUNC(mt76_connac_mcu_start_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_patch_sem_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_start_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_init_download, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_mac_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_vif_ps, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rts_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_beacon_loss_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_nested_tlv, "_gpl", "");
KSYMTAB_FUNC(__mt76_connac_mcu_alloc_sta_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_alloc_wtbl_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_omac_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_uapsd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_hdr_trans_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_generic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_he_tlv_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_smps_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ht_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_dev, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_wed_update, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_ext, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_he_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_eht_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_set_chctx, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_bss, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_chip_config, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_sta_state_dp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_coredump_event, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_ch_power, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rate_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_arp_filter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_p2p_oppps, "_gpl", "");
KSYMTAB_DATA(mt76_connac_wowlan_support, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_wow_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_hif_suspend, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_rr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_wr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_key, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_ext_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_pm, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_restart, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_rdd_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_ram, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_gen_ppe_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_wake, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_power_save_sched, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_free_pending_tx_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_dequeue_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_write_hw_txp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_txp_skb_unmap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_init_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_tx_rate_val, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_txs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_add_txs_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_reverse_frag0_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_rx_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_check_aggr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_token_put, "_gpl", "");
KSYMTAB_FUNC(mt76_connac3_mac_decode_he_radiotap, "_gpl", "");

MODULE_INFO(depends, "mt76,mac80211,cfg80211");

