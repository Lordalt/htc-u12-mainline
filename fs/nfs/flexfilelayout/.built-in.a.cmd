savedcmd_fs/nfs/flexfilelayout/built-in.a := rm -f fs/nfs/flexfilelayout/built-in.a;  printf "fs/nfs/flexfilelayout/%s " flexfilelayout.o flexfilelayoutdev.o | xargs aarch64-linux-gnu-ar cDPrST fs/nfs/flexfilelayout/built-in.a