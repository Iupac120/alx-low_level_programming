#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that returns or prints
 *
 * @n: function parameters
 *
 * Return: 1(Success)
 * and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
