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
	{ 0x3f7919c1, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe5ec6fcb, "kmalloc_caches" },
	{ 0x800403cd, "__pm_runtime_idle" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf00fa41c, "ieee80211_queue_work" },
	{ 0x3c231ae8, "dev_set_drvdata" },
	{ 0xbb0b7369, "sdio_enable_func" },
	{ 0xb0e666fa, "wl1251_free_hw" },
	{ 0xa124787d, "sdio_writeb_readb" },
	{ 0x2a9e1826, "sdio_claim_irq" },
	{ 0x319ff685, "__pm_runtime_resume" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0x27e1a049, "printk" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1dd780a, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0x26f67e71, "sdio_release_irq" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xad45aa5b, "wl1251_init_ieee80211" },
	{ 0xd2796326, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x61979c21, "sdio_register_driver" },
	{ 0x240337e, "sdio_memcpy_fromio" },
	{ 0x3fbc705a, "sdio_claim_host" },
	{ 0xc26e56d7, "wl1251_alloc_hw" },
	{ 0x4772f9c9, "dev_get_drvdata" },
	{ 0xf2402724, "sdio_set_block_size" },
	{ 0xcc78d87c, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb54de63e, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251,compat";

MODULE_ALIAS("sdio:c*v104Cd9066*");
