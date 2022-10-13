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
