#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return 1 if character is a letter, 0 otherwise
 *
 */
int_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
