#!/bin/bash
curl -o 101-winlib.so https://github.com/kwameobj/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-winlib.so 
export LD_PRELOAD=/usr/local/winlib.so
