# HP-8470p-Coreboot
My Coreboot image for the HP EliteBook 8470p

To flash it you must disassemble the laptop (1st flash) and:

First make a copy of your existing rom ( `sudo flashrom -p ch341a_spi -r bios.rom`) - if using a ch341a programmer, otherwise change the programmer name.

Then flash coreboot rom using ( `sudo flashrom -p ch341a_spi -w coreboot.rom`) - if using a ch341a programmer, otherwise change the programmer name.

Warning:
This rom does not install or run windows;
Bluetooth does not work.
