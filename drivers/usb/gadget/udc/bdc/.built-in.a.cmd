savedcmd_drivers/usb/gadget/udc/bdc/built-in.a := rm -f drivers/usb/gadget/udc/bdc/built-in.a;  printf "drivers/usb/gadget/udc/bdc/%s " bdc_core.o bdc_cmd.o bdc_ep.o bdc_udc.o | xargs aarch64-linux-gnu-ar cDPrST drivers/usb/gadget/udc/bdc/built-in.a