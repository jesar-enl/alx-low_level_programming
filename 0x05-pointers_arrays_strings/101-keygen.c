#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

/**
 * main - random password genrator
 *
 * Description: generates a random password
 * in the range of uppercase, lowercase, digits, and symbols.
 *
 * Return: 0
 */
int main(void)
{
	printf("Length of password: ");
	int length;
	scanf("%d", &length);

	if (length <= 0)
	{
		printf("Password must be >= 1!");
		return (1);
	}

	char *password = malloc(length + 1);

	char *digits = "0123456789";
	int digits_length = strlen(digits);

	char *lower = "abcdefghijklmnopqrstuvwxyz";
	int lower_length = strlen(lower);

	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int upper_length = strlen(upper);

	char *symbols = "!@#$%^&*?/~`";
	int symbols_length = strlen(symbols);

	/* genrate a password each time with a unique id */
	srand(time(NULL) * getpid());

	/* loop through each char array to pick a random character */
	for (int i = 0; i < length; i++)
	{
		/* creates a random number between 0-3 */
		int char_type = rand() % 4;

		if (char_type == 0)
			password[i] = digits[rand() % digits_length];
		else if (char_type == 1)
			password[i] = lower[rand() % lower_length];
		else if (char_type == 2)
			password[i] = upper[rand() % upper_length];
		else
			password[i] = symbols[rand() % symbols_length];
	}
	password[length] = '\0';

	printf("Password: %s\n", password);

	free(password);

	return (0);
}
