#include "main.h"
/**
 * _isalpha - A function thet alphabet number
 *
 * @c: A parameter to function
 *
 * Return: 0(Success)
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
