# VARIADIC FUNCTIONS

These are function that accept any number of arguments.

```c
va_list args;
va_args(args, n);
va_start(args, n);
va_end(args);
```
where `args` is the variable name initialized by `va_list`.

to start the function, we use the `va_start` argument, while the `va_end` command terminates the function.

3. A function that prints anything.
	- where the format is a list of types of arguments passed to the function; `char`, `int`, `float`, `string char`
	- prototype:
```c 
void print_all(const char * const format, ...)
```
where the format is a const character.
