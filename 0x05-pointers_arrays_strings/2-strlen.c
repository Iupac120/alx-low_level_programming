#include "main.h"
/**
 * _strlen - function that returns the lenth of the string
 * @s: the function parameter
 * Return: 0(Success)
 */
int _strlen(char *s)
{
	count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
