#include "main.h"
/**
 * _islower - A function that return 0 or 1
 * @c: parameters to printed
 *
 * Return: 1(Success)
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
