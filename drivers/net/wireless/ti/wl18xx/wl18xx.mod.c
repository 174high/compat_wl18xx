#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1d23d13a, "module_layout" },
	{ 0xe5ec6fcb, "kmalloc_caches" },
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0xa416105, "wlcore_set_key" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc8d73f90, "generic_file_llseek" },
	{ 0x14c068b8, "debugfs_create_dir" },
	{ 0x8a854bea, "single_open" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x19e2df09, "single_release" },
	{ 0x1a339579, "ieee80211_set_netdev_features" },
	{ 0xa0eac20, "seq_printf" },
	{ 0x94c6ae9c, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9007d242, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xa26e68ac, "wlcore_alloc_hw" },
	{ 0xd2b1a0c9, "mutex_unlock" },
	{ 0xefc53b15, "debugfs_create_file" },
	{ 0x8ff9ba17, "seq_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xea170886, "wl1271_cmd_configure" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fdcc128, "default_llseek" },
	{ 0xcc006f59, "wlcore_boot_upload_firmware" },
	{ 0x27e1a049, "printk" },
	{ 0x45e69c00, "wlcore_set_partition" },
	{ 0x328a05f1, "strncpy" },
	{ 0x814eb6bf, "wlcore_enable_interrupts" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x970143d9, "mutex_lock" },
	{ 0xb41ab2da, "platform_driver_register" },
	{ 0x4f0e2d45, "skb_pull" },
	{ 0x6216dca9, "simple_open" },
	{ 0x79f7e4b6, "skb_queue_tail" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x7d407eba, "wlcore_disable_interrupts" },
	{ 0x1044196e, "wlcore_remove" },
	{ 0xe9453201, "wl1271_free_tx_id" },
	{ 0x6d5ee113, "ieee80211_get_hdrlen_from_skb" },
	{ 0xa14d5085, "wlcore_free_hw" },
	{ 0x629f4748, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x5294fba, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xd10bf14b, "wl1271_debugfs_update_stats" },
	{ 0xce4a9c92, "request_firmware" },
	{ 0xced836bf, "wlcore_boot_run_firmware" },
	{ 0xc372c157, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x820230a1, "wl12xx_is_dummy_packet" },
	{ 0xf6aff851, "platform_driver_unregister" },
	{ 0xa71c2932, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,compat,cfg80211";

MODULE_ALIAS("platform:wl18xx");
