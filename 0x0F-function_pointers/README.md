# C - Function pointers

`
void fun(int a)
{
	printf("The value of a is %d\n", a);
}
`

To point to this function;
`
void (*fun_p)(int) = &fun;
`

When pointing to a function, the function pointer should be wrapped in a set parenthesis as shown above.
