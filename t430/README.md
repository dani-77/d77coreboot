# t430
 My T430 Coreboot rom

There are 2 bios files with names self explanatory;
Coreboot.rom is an Intel GPU rom and nVidia is to be flashed only on laptops with nVidia GPU.

first time install:
===================
split the rom
```shell
dd if=coreboot.rom of=bottom.rom bs=1M count=8 `
```
```shell
dd if=coreboot.rom of=top.rom bs=1M skip=8 `
```
and then flash the corresponding chips:
```shell
sudo flashrom -p ch341a_spi -w bottom.rom
```
```shell
sudo flashrom -p ch341a_spi -w top.rom
```

PS: it might be needed to add -c (name of the bios chip); I use ch341a programmer. If you intend to use another change the name of the programmer.

to flash (with coreboot already installed):
==========================================
```shell
sudo flashrom -p internal:laptop=force_I_want_a_brick -w name_of_the_rom.rom
```
