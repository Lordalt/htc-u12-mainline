savedcmd_sound/drivers/modules.order := {   cat sound/drivers/opl3/modules.order;   cat sound/drivers/opl4/modules.order;   cat sound/drivers/mpu401/modules.order;   cat sound/drivers/vx/modules.order;   cat sound/drivers/pcsp/modules.order;   echo sound/drivers/snd-aloop.o; :; } > sound/drivers/modules.order