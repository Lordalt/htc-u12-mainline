savedcmd_drivers/media/platform/mediatek/vcodec/common/mtk-vcodec-common.mod := printf '%s\n'   mtk_vcodec_intr.o mtk_vcodec_util.o mtk_vcodec_fw.o mtk_vcodec_fw_scp.o | awk '!x[$$0]++ { print("drivers/media/platform/mediatek/vcodec/common/"$$0) }' > drivers/media/platform/mediatek/vcodec/common/mtk-vcodec-common.mod