savedcmd_drivers/crypto/hisilicon/modules.order := {   cat drivers/crypto/hisilicon/hpre/modules.order;   cat drivers/crypto/hisilicon/sec2/modules.order;   echo drivers/crypto/hisilicon/hisi_qm.o;   cat drivers/crypto/hisilicon/zip/modules.order;   cat drivers/crypto/hisilicon/trng/modules.order; :; } > drivers/crypto/hisilicon/modules.order