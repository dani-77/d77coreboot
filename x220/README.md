# x220
 My X220 Coreboot rom

first time install:
===================

flash the corresponding chip:

`sudo flashrom -p ch341a_spi -w coreboot.rom`

PS: it might be needed to add -c (name of the bios chip); I use ch341a programmer. If you intend to use another change the name of the programmer.

to flash (with coreboot already installed):
==========================================

`sudo flashrom -p internal:laptop=force_I_want_a_brick -w coreboot.rom `
