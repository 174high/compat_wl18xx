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
	{ 0x92b57248, "flush_work" },
	{ 0xe5ec6fcb, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xfd74345d, "rfkill_set_sw_state" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x1750556f, "register_pernet_device" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x14c068b8, "debugfs_create_dir" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x91897220, "__alloc_workqueue_key" },
	{ 0xdb7dee28, "genl_unregister_family" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x508c25dd, "dev_change_net_namespace" },
	{ 0x36303602, "kobject_uevent" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x8949858b, "schedule_work" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x94c6ae9c, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xd2b1a0c9, "mutex_unlock" },
	{ 0x7fdb7f12, "rfkill_register" },
	{ 0x7ab437c5, "debugfs_rename" },
	{ 0x5bde47fd, "get_net_ns_by_pid" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xec342ced, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xb9776419, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d79e643, "__pskb_pull_tail" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x6d88dce1, "dev_alloc_skb" },
	{ 0x11fd7fa7, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3b2122c5, "rfkill_alloc" },
	{ 0x3ce5f00f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe99d06cb, "ethtool_op_get_link" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x708c2745, "unregister_pernet_device" },
	{ 0x4911b025, "class_unregister" },
	{ 0xe77c9c4c, "rfkill_set_hw_state" },
	{ 0xc0580937, "rb_erase" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd85d6a12, "nla_put" },
	{ 0x443840a0, "wireless_send_event" },
	{ 0x9b6b480c, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7c79f9c, "skb_push" },
	{ 0x970143d9, "mutex_lock" },
	{ 0xaed77bdc, "destroy_workqueue" },
	{ 0x92630cad, "dev_close" },
	{ 0x97bbd76a, "dev_get_by_index" },
	{ 0x2fa869a6, "netlink_unicast" },
	{ 0xf89016e7, "platform_device_unregister" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x25aa9cc4, "rfkill_pause_polling" },
	{ 0x40f4768b, "genl_register_family_with_ops" },
	{ 0xa9ae9304, "sysfs_remove_link" },
	{ 0xa8241816, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4f0e2d45, "skb_pull" },
	{ 0x2932d2c0, "init_net" },
	{ 0x6a53ac5f, "__class_register" },
	{ 0x92c5e251, "__dev_get_by_index" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9b6eb137, "ksize" },
	{ 0x69f0c34e, "boot_tvec_bases" },
	{ 0x20322a68, "rfkill_resume_polling" },
	{ 0x5b3c6d9b, "sysfs_create_link" },
	{ 0x4dd4bc7f, "kmem_cache_alloc" },
	{ 0xd112ad4c, "__alloc_skb" },
	{ 0x4e489a8f, "net_ns_type_operations" },
	{ 0x816a00e6, "netlink_broadcast" },
	{ 0x9bd4ebd4, "put_device" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x653d9ee1, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc27487dd, "__bug" },
	{ 0x8a8a5a6e, "pskb_expand_head" },
	{ 0x95d5940, "device_rename" },
	{ 0xb8d85022, "netdev_err" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0x72542c85, "__wake_up" },
	{ 0x53940f62, "genlmsg_multicast_allns" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xace391de, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x9775cdc, "kref_get" },
	{ 0xc99ed8a1, "device_initialize" },
	{ 0xf39eaef3, "genl_register_mc_group" },
	{ 0xfb1ee286, "rfkill_blocked" },
	{ 0x1b35104e, "platform_device_register_resndata" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcea510ec, "consume_skb" },
	{ 0x22c49a7d, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47044b2e, "skb_put" },
	{ 0x6c35a1f5, "rfkill_unregister" },
	{ 0xbdabd138, "skb_copy_bits" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb859f38b, "krealloc" },
	{ 0xb9eb3aa9, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";
