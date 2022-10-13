# VARIADIC FUNCTIONS

These are function that accept any number of arguments.

```c
va_list args;
va_arg(args, n);
va_start(args, n);
va_end(args);
```
where `args` is the variable name initialized by `va_list`.

to start the function, we use the `va_start` argument, while the `va_end` command terminates the function.
1. 

2. A function that prints numbers.
	- where `separator`  is the string to be printed between numbers
	- `n`  is the number of integers passed to the function
	- if `separator is `NULL`, don't print it.
	- prototype:
```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

3. A function that prints two strings.
	- where `separator` is the string to be placed between the strings.
	- `n` is the number of strings passed to the function
	- prototype:
```c
void print_strings(const char *separator, const unsigned int n, ...);
```
	- If separator is `NULL`, don't print it
	- If one string is `NULL`, print `(nil)` instead

4. A function that prints anything.
	- where the format is a list of types of arguments passed to the function; `char`, `int`, `float`, `string char`
	- prototype:
```c 
void print_all(const char * const format, ...)
```
where the format is a const character.
