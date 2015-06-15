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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3c231ae8, "dev_set_drvdata" },
	{ 0xc9512d27, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb779bca, "dev_err" },
	{ 0x65955489, "platform_device_del" },
	{ 0xe4be3ded, "platform_device_alloc" },
	{ 0x6084a5ce, "driver_unregister" },
	{ 0xf7f029c, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x34a39f9e, "spi_sync" },
	{ 0xe9e5b815, "platform_device_add_resources" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x2e43ec13, "platform_device_add_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1eb1cce1, "spi_register_driver" },
	{ 0x4772f9c9, "dev_get_drvdata" },
	{ 0x1e319daa, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";

