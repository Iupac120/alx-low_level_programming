#include "main.h"
/**
 * print_numbers - function that print digits
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0 ; c <= 10 ; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
