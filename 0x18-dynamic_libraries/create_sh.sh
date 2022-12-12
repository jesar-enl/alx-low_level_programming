#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc -shared -Wl,-soname,100-operations.so -o 100-operations.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
