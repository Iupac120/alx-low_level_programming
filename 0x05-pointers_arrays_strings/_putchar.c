#include "main.h"
#include "unistd.h"
/**
 * _putchar - function that uses _putchar function
 *
 * @c: function parameter
 * Return: 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
