savedcmd_drivers/gpu/drm/meson/meson_dw_mipi_dsi.mod := printf '%s\n'   meson_dw_mipi_dsi.o | awk '!x[$$0]++ { print("drivers/gpu/drm/meson/"$$0) }' > drivers/gpu/drm/meson/meson_dw_mipi_dsi.mod
