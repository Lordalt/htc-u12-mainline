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

KSYMTAB_FUNC(mt76_set_irq_mask, "_gpl", "");
KSYMTAB_FUNC(mt76_mmio_init, "_gpl", "");
KSYMTAB_FUNC(__mt76_poll, "_gpl", "");
KSYMTAB_FUNC(____mt76_poll_msec, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_get_min_avg_rssi, "_gpl", "");
KSYMTAB_FUNC(__mt76_worker_fn, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_free_pending_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_wed_setup, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_rx_poll, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_attach, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_cleanup, "_gpl", "");
KSYMTAB_DATA(mt76_rates, "_gpl", "");
KSYMTAB_FUNC(mt76_set_stream_caps, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_register_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_create_page_pool, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_device, "_gpl", "");
KSYMTAB_FUNC(mt76_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_device, "_gpl", "");
KSYMTAB_FUNC(mt76_free_device, "_gpl", "");
KSYMTAB_FUNC(mt76_rx, "_gpl", "");
KSYMTAB_FUNC(mt76_has_tx_pending, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey_active_time, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76_get_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_key_setup, "", "");
KSYMTAB_FUNC(mt76_rx_signal, "", "");
KSYMTAB_FUNC(mt76_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_state, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_pre_rcu_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_init, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76_get_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_init_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_get_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_finish, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_check, "_gpl", "");
KSYMTAB_FUNC(mt76_set_tim, "_gpl", "");
KSYMTAB_FUNC(mt76_insert_ccmp_hdr, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_get_antenna, "_gpl", "");
KSYMTAB_FUNC(mt76_init_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_calculate_default_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_worker, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_page_pool_stats, "_gpl", "");
KSYMTAB_FUNC(mt76_phy_dfs_state, "_gpl", "");
KSYMTAB_FUNC(mt76_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt76_seq_puts_array, "_gpl", "");
KSYMTAB_FUNC(mt76_register_debugfs_fops, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_eeprom, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_override, "_gpl", "");
KSYMTAB_FUNC(mt76_find_power_limits_node, "_gpl", "");
KSYMTAB_FUNC(mt76_find_channel_node, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate_power_limits, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_check_agg_ssn, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_lock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_unlock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_done, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_add, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_get, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_check, "_gpl", "");
KSYMTAB_FUNC(__mt76_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_tx, "_gpl", "");
KSYMTAB_FUNC(mt76_release_buffered_frames, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule_all, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_worker_run, "_gpl", "");
KSYMTAB_FUNC(mt76_stop_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_wake_tx_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_ac_to_hwq, "_gpl", "");
KSYMTAB_FUNC(mt76_skb_adjust_pad, "_gpl", "");
KSYMTAB_FUNC(mt76_queue_tx_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_set_tx_blocked, "_gpl", "");
KSYMTAB_FUNC(mt76_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_start, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_stop, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_msg_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_get_response, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_rx_event, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_skb_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_send_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_disable_aspm, "_gpl", "");

MODULE_INFO(depends, "mac80211,cfg80211");

