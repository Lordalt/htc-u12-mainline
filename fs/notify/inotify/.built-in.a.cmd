savedcmd_fs/notify/inotify/built-in.a := rm -f fs/notify/inotify/built-in.a;  printf "fs/notify/inotify/%s " inotify_fsnotify.o inotify_user.o | xargs aarch64-linux-gnu-ar cDPrST fs/notify/inotify/built-in.a