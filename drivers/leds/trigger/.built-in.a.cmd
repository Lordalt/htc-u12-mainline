savedcmd_drivers/leds/trigger/built-in.a := rm -f drivers/leds/trigger/built-in.a;  printf "drivers/leds/trigger/%s " ledtrig-timer.o ledtrig-disk.o ledtrig-heartbeat.o ledtrig-cpu.o ledtrig-default-on.o ledtrig-panic.o | xargs aarch64-linux-gnu-ar cDPrST drivers/leds/trigger/built-in.a