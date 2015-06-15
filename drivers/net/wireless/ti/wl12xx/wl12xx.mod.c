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
	{ 0x9e1963e1, "wlcore_boot_upload_nvs" },
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0xa416105, "wlcore_set_key" },
	{ 0x96884e8c, "wl1271_acx_init_mem_config" },
	{ 0xc8d73f90, "generic_file_llseek" },
	{ 0x14c068b8, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x52327184, "wl1271_acx_pm_config" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xe4be3479, "wlcore_calc_packet_alignment" },
	{ 0x9007d242, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa26e68ac, "wlcore_alloc_hw" },
	{ 0xd2b1a0c9, "mutex_unlock" },
	{ 0xefc53b15, "debugfs_create_file" },
	{ 0xb5e55e9d, "wl1271_acx_set_ht_capabilities" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xea170886, "wl1271_cmd_configure" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0x2ee66d0, "wl1271_cmd_data_path" },
	{ 0x8cf4f149, "wl12xx_acx_mem_cfg" },
	{ 0xcc006f59, "wlcore_boot_upload_firmware" },
	{ 0x46986c1f, "wl1271_acx_sleep_auth" },
	{ 0x27e1a049, "printk" },
	{ 0x45e69c00, "wlcore_set_partition" },
	{ 0x814eb6bf, "wlcore_enable_interrupts" },
	{ 0x8502c081, "wl1271_cmd_test" },
	{ 0x970143d9, "mutex_lock" },
	{ 0xb41ab2da, "platform_driver_register" },
	{ 0x6216dca9, "simple_open" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x7d407eba, "wlcore_disable_interrupts" },
	{ 0x1044196e, "wlcore_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf851faf, "wlcore_tx_complete" },
	{ 0x5294fba, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xd10bf14b, "wl1271_debugfs_update_stats" },
	{ 0xced836bf, "wlcore_boot_run_firmware" },
	{ 0xc372c157, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf6aff851, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,compat";

MODULE_ALIAS("platform:wl12xx");
