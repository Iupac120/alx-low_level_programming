#include "main.h"
/**
 * print_line - function that prints line
 *
 * @n: function parameter
 * Return: 0(Success)
 */

void print_line(int n)
{
	for (n = 1 ; n <= 10 ; n++)
	{
		if (n >= 1 && n <= 10)
			_putchar('-');
		else
			_putchar('\n');
	}
}
