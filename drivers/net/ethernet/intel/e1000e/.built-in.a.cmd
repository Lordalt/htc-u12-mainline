savedcmd_drivers/net/ethernet/intel/e1000e/built-in.a := rm -f drivers/net/ethernet/intel/e1000e/built-in.a;  printf "drivers/net/ethernet/intel/e1000e/%s " 82571.o ich8lan.o 80003es2lan.o mac.o manage.o nvm.o phy.o param.o ethtool.o netdev.o ptp.o | xargs aarch64-linux-gnu-ar cDPrST drivers/net/ethernet/intel/e1000e/built-in.a