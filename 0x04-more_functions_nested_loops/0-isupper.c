#include "main.h"
/**
 * int _isupper - The function name
 *
 * @c: Function parameter
 *
 * Return: i or 0(Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
