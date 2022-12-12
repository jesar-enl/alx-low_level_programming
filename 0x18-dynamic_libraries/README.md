# DYNAMIC LIBRARIES / SHARED LIBRARIES

This directory introduces the part of creating `dynamic libraries` in C.
The steps include;

- Creating object files using `gcc -c -fPIC *.c`
- Creating the library with an extension `.so` using the command:
  `gcc -shared -Wl,-soname,lib<name>.so -o lib<name>.so *.o`
- Avail a path to the library to be used:
  `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

