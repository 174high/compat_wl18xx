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
	{ 0x800403cd, "__pm_runtime_idle" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3c231ae8, "dev_set_drvdata" },
	{ 0xd7f7e3eb, "sdio_writesb" },
	{ 0xbb0b7369, "sdio_enable_func" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x319ff685, "__pm_runtime_resume" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0xcc7b3438, "sdio_get_host_pm_caps" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdb779bca, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x65955489, "platform_device_del" },
	{ 0xe4be3ded, "platform_device_alloc" },
	{ 0xf7f029c, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbbd66f6, "sdio_readsb" },
	{ 0x1dd780a, "sdio_unregister_driver" },
	{ 0xe9e5b815, "platform_device_add_resources" },
	{ 0xb487e006, "sdio_f0_writeb" },
	{ 0x5ba463b2, "sdio_set_host_pm_flags" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x12d0a4bc, "sdio_f0_readb" },
	{ 0x2e43ec13, "platform_device_add_data" },
	{ 0xbaac8fa1, "mmc_power_save_host" },
	{ 0x6ef62c7b, "mmc_power_restore_host" },
	{ 0xd2796326, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x61979c21, "sdio_register_driver" },
	{ 0x240337e, "sdio_memcpy_fromio" },
	{ 0x3fbc705a, "sdio_claim_host" },
	{ 0x4772f9c9, "dev_get_drvdata" },
	{ 0xf2402724, "sdio_set_block_size" },
	{ 0xcc78d87c, "sdio_disable_func" },
	{ 0xb54de63e, "sdio_release_host" },
	{ 0x1e319daa, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";

MODULE_ALIAS("sdio:c*v0097d4076*");
