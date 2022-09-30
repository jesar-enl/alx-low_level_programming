# 0x0A-argc_argv

These are two command-line arguments that are passed into the main().

The syntax:
`int main(int argc, char *argv[]);`

- argc: This is the count of the arguments supplied to the program. It is referred to as **argument count**
- argv: An array of pointers to the strings.
-------------------------------------------------------------
1. [0-whatsmyname.c](./0-whatsmyname.c) - A program that prints its name.
2. [1-args.c](./1-args.c) - A program that prints the number of arguments passed int it.
3. [2-args.c](./2-args.c) - A program that prints all the arguments it receives.
4. [3-mul.c](./3-mul.c) - A program that multiplies two numbers, passed as arguments.
5. [4-add.c](./4-add.c) - A program that adds positive numbers passed as arguments. If one of the arguments is not a digit, print **Error**. If no arguments, print **0**.
6. [100-change.c](./100-change.c) - convert the integer to the number of coins each has, basing on the cents of 25, 10, 5, 2, and 1 cent.
