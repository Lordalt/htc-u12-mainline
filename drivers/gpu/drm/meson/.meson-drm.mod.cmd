savedcmd_drivers/gpu/drm/meson/meson-drm.mod := printf '%s\n'   meson_drv.o meson_plane.o meson_crtc.o meson_encoder_cvbs.o meson_viu.o meson_vpp.o meson_venc.o meson_vclk.o meson_overlay.o meson_rdma.o meson_osd_afbcd.o meson_encoder_hdmi.o meson_encoder_dsi.o | awk '!x[$$0]++ { print("drivers/gpu/drm/meson/"$$0) }' > drivers/gpu/drm/meson/meson-drm.mod