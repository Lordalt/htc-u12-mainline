savedcmd_drivers/media/platform/nxp/imx8-isi/imx8-isi.mod := printf '%s\n'   imx8-isi-core.o imx8-isi-crossbar.o imx8-isi-gasket.o imx8-isi-hw.o imx8-isi-pipe.o imx8-isi-video.o imx8-isi-debug.o imx8-isi-m2m.o | awk '!x[$$0]++ { print("drivers/media/platform/nxp/imx8-isi/"$$0) }' > drivers/media/platform/nxp/imx8-isi/imx8-isi.mod