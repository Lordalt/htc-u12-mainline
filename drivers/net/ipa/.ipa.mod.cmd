savedcmd_drivers/net/ipa/ipa.mod := printf '%s\n'   ipa_main.o ipa_power.o ipa_reg.o ipa_mem.o ipa_table.o ipa_interrupt.o gsi.o gsi_reg.o gsi_trans.o ipa_gsi.o ipa_smp2p.o ipa_uc.o ipa_endpoint.o ipa_cmd.o ipa_modem.o ipa_resource.o ipa_qmi.o ipa_qmi_msg.o ipa_sysfs.o reg/ipa_reg-v3.1.o reg/ipa_reg-v3.5.1.o reg/ipa_reg-v4.2.o reg/ipa_reg-v4.5.o reg/ipa_reg-v4.7.o reg/ipa_reg-v4.9.o reg/ipa_reg-v4.11.o reg/ipa_reg-v5.0.o reg/gsi_reg-v3.1.o reg/gsi_reg-v3.5.1.o reg/gsi_reg-v4.0.o reg/gsi_reg-v4.5.o reg/gsi_reg-v4.9.o reg/gsi_reg-v4.11.o reg/gsi_reg-v5.0.o data/ipa_data-v3.1.o data/ipa_data-v3.5.1.o data/ipa_data-v4.2.o data/ipa_data-v4.5.o data/ipa_data-v4.7.o data/ipa_data-v4.9.o data/ipa_data-v4.11.o data/ipa_data-v5.0.o | awk '!x[$$0]++ { print("drivers/net/ipa/"$$0) }' > drivers/net/ipa/ipa.mod