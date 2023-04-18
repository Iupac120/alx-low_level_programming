#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies to the memory area
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * @i: function parameter
 * Return: 0(Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
