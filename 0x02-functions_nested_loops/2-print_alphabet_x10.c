#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int ten;
	char c;

	for (ten = 1; ten <= 10; ten++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}


