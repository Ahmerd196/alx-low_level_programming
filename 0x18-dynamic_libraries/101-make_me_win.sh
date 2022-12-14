#!/bin/bash
wget -q -O /tmp/libtest.so https://github.com/Ahmerd196/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
