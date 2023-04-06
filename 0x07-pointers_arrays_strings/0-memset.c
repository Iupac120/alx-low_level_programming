#include <stdio.h>
#include <string.h>
/**
 * _memset - function that prints memeset
 * @s: function parameter
 * @b: function parameter
 * @n: function parameter
 * @i: function parameter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
