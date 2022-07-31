#include "main.h"

/**
 * print_line - prints underscore number of times depending on argument
 * @n: argument
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
