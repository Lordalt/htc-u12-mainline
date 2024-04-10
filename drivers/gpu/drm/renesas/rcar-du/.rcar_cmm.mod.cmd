savedcmd_drivers/gpu/drm/renesas/rcar-du/rcar_cmm.mod := printf '%s\n'   rcar_cmm.o | awk '!x[$$0]++ { print("drivers/gpu/drm/renesas/rcar-du/"$$0) }' > drivers/gpu/drm/renesas/rcar-du/rcar_cmm.mod
