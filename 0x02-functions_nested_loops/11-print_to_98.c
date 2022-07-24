#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers until 98, starting from input
 * @n: argument
 * Return: natural numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n += 1;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n -= 1;
		}
	}
}
