#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints letters of the alphabet in lowercase except e and q
* Return: 0 always
*/

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		if (ch != 101 && ch != 113)
			putchar(ch);
	putchar(10);
	return (0);
}
