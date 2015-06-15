#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1d23d13a, "module_layout" },
	{ 0x1d39f322, "skb_queue_head" },
	{ 0xe5ec6fcb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc8d73f90, "generic_file_llseek" },
	{ 0x14c068b8, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf00fa41c, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffad5b8f, "ieee80211_cqm_rssi_notify" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xb9d32bda, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xe9962456, "ieee80211_unregister_hw" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xd2b1a0c9, "mutex_unlock" },
	{ 0x9d0066ac, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0xefc53b15, "debugfs_create_file" },
	{ 0x7d11c268, "jiffies" },
	{ 0xedb0bcd2, "ieee80211_stop_queues" },
	{ 0x9762df7a, "ieee80211_tx_status" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x3ce5f00f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xd2b311f2, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9b6b480c, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc287c419, "ieee80211_rx" },
	{ 0x7c79f9c, "skb_push" },
	{ 0x970143d9, "mutex_lock" },
	{ 0x4f0e2d45, "skb_pull" },
	{ 0x6216dca9, "simple_open" },
	{ 0x2a1ac60c, "ieee80211_queue_delayed_work" },
	{ 0xae683eee, "dev_kfree_skb_any" },
	{ 0x79f7e4b6, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xc4ee7ea8, "skb_copy_expand" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xd112ad4c, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x6d5ee113, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc2372c2f, "ieee80211_register_hw" },
	{ 0x42e7e12a, "ieee80211_pspoll_get" },
	{ 0xdd825b6c, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9232af6, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0x30fb2ad, "ieee80211_alloc_hw" },
	{ 0x374ed073, "scnprintf" },
	{ 0xce4a9c92, "request_firmware" },
	{ 0x286eb5c3, "ieee80211_probereq_get" },
	{ 0x2f053e04, "ieee80211_free_hw" },
	{ 0x4695e0b6, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0xcea510ec, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47044b2e, "skb_put" },
	{ 0xa71c2932, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,compat";

