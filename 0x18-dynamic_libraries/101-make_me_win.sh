#!/bin/bash
curl -o winlib.so https://github.com/kwameobj/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/usr/local/winlib.so
