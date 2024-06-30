# x230t
 My X230 tablet Coreboot rom

first time flash:
Flash the corresponding bios chips with these commands. Keep in mind that if you don´t use ch341 programmer (Beaglebone or Rpi) you have to swap the name of the programmer.

`sudo flashrom -p ch341a_spi -w top.rom`

`sudo flashrom -p ch341a_spi -w bottom.rom`


to flash (with coreboot already installed):

`sudo flashrom -p internal:laptop=force_I_want_a_brick -w name_of_the_rom.rom `
