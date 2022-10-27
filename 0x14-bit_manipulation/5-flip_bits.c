#include "main.h"

/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: first number provided
 * @m: second number provided
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1;
	unsigned long int flips = n ^ m;
	unsigned int count = 0;

	while (i <= flips)
	{
		if (i & flips)
			count++;
		i <<= 1;
	}

	return (count);
}
