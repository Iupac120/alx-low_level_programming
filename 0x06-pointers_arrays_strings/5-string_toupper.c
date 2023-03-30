#include "main.h"
#include <string.h>
/**
 * string_toupper - function that chanes lower to upper
 * @str: function parameter
 * Return: 0(Success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
