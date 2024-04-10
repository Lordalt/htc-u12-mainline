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

KSYMTAB_FUNC(mt792x_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_stop, "_gpl", "");
KSYMTAB_FUNC(mt792x_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt792x_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_worker, "_gpl", "");
KSYMTAB_FUNC(mt792x_roc_timer, "_gpl", "");
KSYMTAB_FUNC(mt792x_flush, "_gpl", "");
KSYMTAB_FUNC(mt792x_assign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_unassign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_wakeup, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_strings, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_sset_count, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_sta_statistics, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wiphy, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_mac80211_ops, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(__mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_load_firmware, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_set_timeing, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_update_mib_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_get_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_assoc_rssi, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt792x_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt792x_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_init_band, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_wake_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_power_save_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_stats_show, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_acq, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_set, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_get, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_tasklet, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_enable, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reinit_cond, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_rx, "_gpl", "");
KSYMTAB_FUNC(mt792x_wfsys_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_acpi_sar, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_acpi_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt792x_acpi_get_flags, "_gpl", "");

MODULE_INFO(depends, "mt76,mt76-connac-lib,mac80211");

