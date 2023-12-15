#!/bin/bash
gcc -wall -wextra -werror -pendantic -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PQTH=.:$LD_LIBRQRY_PATH
