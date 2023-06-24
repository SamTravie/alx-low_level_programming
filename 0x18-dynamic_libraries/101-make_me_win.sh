#!/bin/bash
wget -P /tmp https://github.com/SamTravie/alx-low_level_programming/tree/master/0x18-dynamic_libraries/numbers.so
export LD_PRELOAD=/tmp/numbers.so
