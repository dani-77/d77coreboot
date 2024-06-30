# x1 carbon gen 1
My X1 Carbon Gen 1 Coreboot rom

First time install:
With a soic8 (Pomona), a ch341a

`sudo flashrom -p ch341a_spi -w x1_carbon_MX25L3273E_coreboot.rom -c "MX25L3273E" `

For internal flashing:

`sudo flashrom -p internal:laptop=force_I_want_a_brick -l x1c.layout -i bios -w coreboot.rom`


For further instructions and to build your own coreboot rom, read:
https://www.coreboot.org/Board:lenovo/x1_carbon_gen1
