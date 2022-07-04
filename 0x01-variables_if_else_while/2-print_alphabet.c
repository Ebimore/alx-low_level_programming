#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints letters of the alphabet in lowercase
* Return: 0 always
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
