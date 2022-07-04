#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints letters of the alphabet in lowercase then uppercase
* Return: 0 always
*/
int main(void)
{
	int ch;
	int ch2;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch2 = 65; ch2 <= 90; ch2++)
		putchar(ch2);
	putchar(10);
	return (0);
}
