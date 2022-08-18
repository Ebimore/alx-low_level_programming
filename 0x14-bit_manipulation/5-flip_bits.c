#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flips bits in a number
 * @n: ...
 * @m: ...
 * Return: number of bits needed to be flipped
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;
		mask >>= 1;
	}
	return (count);
}
