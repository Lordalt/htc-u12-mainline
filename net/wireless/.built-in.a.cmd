savedcmd_net/wireless/built-in.a := rm -f net/wireless/built-in.a;  printf "net/wireless/%s " tests/built-in.a | xargs aarch64-linux-gnu-ar cDPrST net/wireless/built-in.a
