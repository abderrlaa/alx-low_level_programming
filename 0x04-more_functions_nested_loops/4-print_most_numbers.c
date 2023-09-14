#include "main.h"
/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	char c;
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
