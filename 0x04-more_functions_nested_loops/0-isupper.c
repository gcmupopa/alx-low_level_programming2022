#include "main.h"
/**
 * _isupper - is a function to check if letter is uppercase
 * @c: character to be checked
 * Return: 1 if upper otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
