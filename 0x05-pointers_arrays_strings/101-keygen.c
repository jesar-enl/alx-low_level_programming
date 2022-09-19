#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * password_generator - random password generator
 * @n: length of the password
 *
 * Return: password generated
 */
void password_generator(int N)
{
	/* inititalize counter */
	int p = 0;
	
	/* Seed the random number generator
	 * with current time so that the
	 * numbers will be different every time
	 */
	srand((unsigned int)(time(NULL)));

	/* Array of numbers, lowercase, uppercase,and symbols */
	char list[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*?";

	for (; p < N; p++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	putchar('\n');
}


/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int N = 15;
	password_generator(N);

	return (0);
}
