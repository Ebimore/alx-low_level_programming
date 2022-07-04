#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints single digit numbers
* Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
