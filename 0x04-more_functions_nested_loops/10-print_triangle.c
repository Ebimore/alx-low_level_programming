#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: argument, size of triangle
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
		_putchar('#');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
				_putchar(' ');
			for (b = 1; b <= a; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
