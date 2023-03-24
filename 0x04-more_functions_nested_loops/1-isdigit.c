#include "main.h"
/**
 * _isdigit - A fuction that prints either 1 0r 0
 * @c: Function parameter
 *
 * Return: 1 (digit)
 * and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
