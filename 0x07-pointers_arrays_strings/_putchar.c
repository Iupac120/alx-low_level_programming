#include "main.h"
#include <unistdio.h>
/**
 * _putchar - function to print character
 * @c: function parameter
 * Return: 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
