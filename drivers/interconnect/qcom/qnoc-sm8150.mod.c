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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,sm8150-aggre1-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-aggre1-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-aggre2-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-aggre2-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-camnoc-virt");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-camnoc-virtC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-compute-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-compute-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-config-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-config-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-dc-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-dc-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-gem-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-gem-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-mc-virt");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-mc-virtC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-mmss-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-mmss-nocC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-system-noc");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-system-nocC*");