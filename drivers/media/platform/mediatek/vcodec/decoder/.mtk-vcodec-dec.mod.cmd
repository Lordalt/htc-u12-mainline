savedcmd_drivers/media/platform/mediatek/vcodec/decoder/mtk-vcodec-dec.mod := printf '%s\n'   vdec/vdec_h264_if.o vdec/vdec_vp8_if.o vdec/vdec_vp8_req_if.o vdec/vdec_vp9_if.o vdec/vdec_vp9_req_lat_if.o vdec/vdec_av1_req_lat_if.o vdec/vdec_h264_req_if.o vdec/vdec_h264_req_common.o vdec/vdec_h264_req_multi_if.o vdec/vdec_hevc_req_multi_if.o mtk_vcodec_dec_drv.o vdec_drv_if.o vdec_vpu_if.o vdec_msg_queue.o mtk_vcodec_dec.o mtk_vcodec_dec_stateful.o mtk_vcodec_dec_stateless.o mtk_vcodec_dec_pm.o | awk '!x[$$0]++ { print("drivers/media/platform/mediatek/vcodec/decoder/"$$0) }' > drivers/media/platform/mediatek/vcodec/decoder/mtk-vcodec-dec.mod