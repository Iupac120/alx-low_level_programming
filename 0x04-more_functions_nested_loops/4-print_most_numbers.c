#include "main.h"
/**
 * print_most_numbers - function that prints 0 to 9 except 4 and 5
 *
 * Return: 0(Success)
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (!(i == 2 || i == 4))
			_putchar(i + '0');
	}
	_putchar('\n');
}
