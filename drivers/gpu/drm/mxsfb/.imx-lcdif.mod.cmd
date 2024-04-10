savedcmd_drivers/gpu/drm/mxsfb/imx-lcdif.mod := printf '%s\n'   lcdif_drv.o lcdif_kms.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mxsfb/"$$0) }' > drivers/gpu/drm/mxsfb/imx-lcdif.mod
