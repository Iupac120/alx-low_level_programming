#include "main.h"
#include <string.h>
/**
 * _strncpy - function thta copy string
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: 0(Success0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
