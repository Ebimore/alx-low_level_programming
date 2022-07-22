#include "main.h"

/**
 * _isalpha - checks code
 * @c: a character argument
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
