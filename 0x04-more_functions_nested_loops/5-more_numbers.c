#include "main.h"
/**
 * more_numbers - A function for nested loop
 *
 * Return: 0(Success)
 */

void more_numbers(void)
{
	char i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
