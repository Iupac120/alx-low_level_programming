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
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-1, ");
		return (-1);
	}
}
