savedcmd_drivers/platform/chrome/cros-ec-typec.mod := printf '%s\n'   cros_ec_typec.o cros_typec_vdm.o | awk '!x[$$0]++ { print("drivers/platform/chrome/"$$0) }' > drivers/platform/chrome/cros-ec-typec.mod