#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character ct to standard
 * @c: The function parameter
 *
 * Return: 1(Successs)
 * and 0 0n error appropriately
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}
