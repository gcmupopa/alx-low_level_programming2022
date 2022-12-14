#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase followed by new line
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
	return (0);
}
