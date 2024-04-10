savedcmd_sound/soc/ti/snd-soc-j721e-evm.mod := printf '%s\n'   j721e-evm.o | awk '!x[$$0]++ { print("sound/soc/ti/"$$0) }' > sound/soc/ti/snd-soc-j721e-evm.mod
