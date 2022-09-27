#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: pointer to a pointer
 * @to: pointer pointed to
 * Description: the function is setting the value of a pointer to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
