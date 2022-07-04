#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints letters of the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
