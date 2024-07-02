# x230

 My x230 coreboot rom.

first time flash:
Flash the corresponding bios chips with these commands. Keep in mind that if yo>

`sudo flashrom -p ch341a_spi -w top.rom`

`sudo flashrom -p ch341a_spi -w bottom.rom`


to flash (with coreboot already installed):

`sudo flashrom -p internal:laptop=force_I_want_a_brick -w name_of_the_rom.rom `
