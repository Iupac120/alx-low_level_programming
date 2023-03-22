#include "main.h"
/**
 * _abs - A function that compute absolute program
 *
 * @a: function parameter
 *
 * Return: 0(Success)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
