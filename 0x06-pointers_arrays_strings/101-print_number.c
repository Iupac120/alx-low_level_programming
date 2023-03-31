#include "main.h"
#include <string.h>
/**
 * print_number - function that prints integer
 * @n: function parameter
 * Return: 09Success)
 */
void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -(i);
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
