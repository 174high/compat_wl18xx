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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe5ec6fcb, "kmalloc_caches" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf00fa41c, "ieee80211_queue_work" },
	{ 0x3c231ae8, "dev_set_drvdata" },
	{ 0xb0e666fa, "wl1251_free_hw" },
	{ 0xc9512d27, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x6084a5ce, "driver_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x34a39f9e, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xad45aa5b, "wl1251_init_ieee80211" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f053e04, "ieee80211_free_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1eb1cce1, "spi_register_driver" },
	{ 0xc26e56d7, "wl1251_alloc_hw" },
	{ 0x4772f9c9, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251,compat";

