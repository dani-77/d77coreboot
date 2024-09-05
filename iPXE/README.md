First find ethernet using:

```
lspci
```

mine is:

```
00:19.0 Ethernet controller: Intel Corporation 82579LM Gigabit Network Connection (Lewisville) (rev 04)
```

then:

```
lspci -s 00:19.0 -nnn
```

mine is:

```
00:19.0 Ethernet controller [0200]: Intel Corporation 82579LM Gigabit Network Connection (Lewisville) [8086:1502] (rev 04)
```

After that,

```
git clone git://git.ipxe.org/ipxe.git copy general.h to:
```

copy general.h to ipxe/src/config/local/

and copy netboot.ipxe to ipxe/src/

then build the ipxe rom; in my case:

```
sudo make clean; sudo make -j3 bin/80861502.rom EMBED=./netboot.ipxe
```

after compile add the ipxe rom to your coreboot rom this way:

```
sudo cbfstool coreboot.rom add -f 80861502.rom -n pci8086.1502.rom -t raw
```

Flash the new coreboot rom and enjoy.
