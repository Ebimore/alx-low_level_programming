#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all base 16 letters in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (ch = 97; ch <= 102; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
