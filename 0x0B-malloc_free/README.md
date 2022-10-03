# C- malloc() and free()

## malloc() 
- is used to allocate memory space to a variable in a function during execution of a program.
It requests a block of memory from the heap and if granted, the O.S will reserve the requested memory amount and the function will return a pointer.
- Syntax : `void *malloc(size_t size);`
where:
`size` is  the number of bytes you need to allocate.
`void *` is a pointer to the type of your choice.

## free()	
- this function frees space that was allocated to it by the `malloc()` function.
-Syntax: `void free(void *ptr)` where `ptr` is the address of the memory space previously allocated by and returned by a call to malloc().

1. [0-create_array.c](./0-create_array.c) - function that creates an array of characters, initialized to a specific char.
2. [1-strdup.c](./1-strdup.c) - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
3. [2-str_concat.c](./2-str_concat.c) - function that concatenates two strings.
4. [3-alloc_grid.c](./3-alloc_grid.c) - function that returns a pointer to a 2D array of integers.
5. [4-free_grid.c](./4-free_grid.c) - function that fres a 2D grid previously created.
6. [100-argstostr.c](./100-argstostr.c) - function that concatenates all the arguments of the program.
