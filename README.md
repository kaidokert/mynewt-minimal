## Overview

Tiniest working blinky with MyNewt on nRF52 DK

## Building

```no-highlight
    $ newt install
```

```
    $ newt clean nrf52_blinky ; newt build -p nrf52_blinky ; newt create-image nrf52_blinky 0
    $ find . -name blinky.elf.bin | xargs ls -laSh
```
Bin should be about 3.7K

```
    $ sed -i -e  "s/- sys/#- sys/" repos/apache-mynewt-core/sys/sysinit/pkg.yml
```
Rebuild, binary should be about 2.5k, excluding all flash code
