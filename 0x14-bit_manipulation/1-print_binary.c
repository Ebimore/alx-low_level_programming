#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: the number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_divide(n);
}

/**
 * _divide - ...
 * @n: ...
 */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;
	_divide(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
