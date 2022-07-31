#include "main.h"

/**
 * print_diagonal - prints underscore number of times depending on argument
 * @n: argument
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else if (n == 1)
		_putchar('\\');
	
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
