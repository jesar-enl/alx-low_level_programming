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
	int randomizer = 0;

	/* Seed the random number generator
	 * with current time so that the
	 * numbers will be different every time
	 */
	srand((unsigned int)(time(NULL)));

	/* Array of numbers */
	char numbers[] = "0123456789";

	/* Array of small alphabets */
	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	/* Array of uppercase letters */
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* Array of special characters */
	char symbols[] = "!@#$^&*?";

	/* Variable to store the password */
	char password[N];

	/* randomizer inside the loop */
	randomizer = rand() % 4;

	/* iterate over the range */
	for (; p < N; p++)
	{
		if (randomizer == 1)
		{
			password[p] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[p]);
		}
		else if (randomizer == 2)
		{
			password[p] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[p]);
		}
		else if (randomizer == 3)
		{
			password[p] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[p]);
		}
		else
		{
			password[p] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[p]);
					}
					}
					}

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	/* Length of password to be generated */
	int N = 10;

	password_generator(N);
	putchar('\n');
	return (0);
}
