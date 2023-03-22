#include "main.h"
/**
 * print_last_digit - A function to print last digit
 *
 * @i: The function parameter
 *
 * Return: 0(Success)
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
