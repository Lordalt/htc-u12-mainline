savedcmd_drivers/media/rc/keymaps/rc-avermedia-m733a-rm-k6.mod := printf '%s\n'   rc-avermedia-m733a-rm-k6.o | awk '!x[$$0]++ { print("drivers/media/rc/keymaps/"$$0) }' > drivers/media/rc/keymaps/rc-avermedia-m733a-rm-k6.mod