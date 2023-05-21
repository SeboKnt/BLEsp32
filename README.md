# BLEsp32

## le importante

`cd myApp` \
`rm -r build` \\
`west build` \
`west flash`

**!scheint nicht zu funktionieren!** \
`sudo chmod 777 /dev/ttyUSB0` \
`screen /dev/ttyUSB0 115200`

ODER

`west espressif monitor`


## le init

`west init` \
`west blobs fetch hal_espressif` \
`west update` \
`west zephyr-export`

