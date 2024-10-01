# t400 Coreboot and Libreboot rom's

The 1280_seabios_t400_8mb_vgarom_vesafb is a Coreboot rom.
The t400_8mb_ukqwerty_vesafb.rom is a libreboot rom, directly downloaded from libreboot git.

With coreboot or libreboot already flashed, flash using:

`sudo flashrom -p internal -w nameofthe.rom`
-------------------------------------------
  
With stock bios, you should use an external flasher (Rpi, BBB or another). Find instructions at coreboot.org or libreboot.org or osboot.org.
