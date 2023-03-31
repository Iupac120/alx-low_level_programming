#include "main.h"
#include <string.h>
/**
 * rot13 - function that encodes using rot13
 * @str: function parameter
 * Return: 09Success0
 */
char *rot13(char *str)
{
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
	}
	return (str);
}
