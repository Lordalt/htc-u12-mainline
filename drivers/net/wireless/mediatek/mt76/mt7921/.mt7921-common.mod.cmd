savedcmd_drivers/net/wireless/mediatek/mt76/mt7921/mt7921-common.mod := printf '%s\n'   mac.o mcu.o main.o init.o debugfs.o | awk '!x[$$0]++ { print("drivers/net/wireless/mediatek/mt76/mt7921/"$$0) }' > drivers/net/wireless/mediatek/mt76/mt7921/mt7921-common.mod