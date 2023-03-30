#include "main.h"
#include <string.h>
/**
 * _strcat - a pointer function that cocatenates two arrays
 * @dest: function parameter
 * @src: function parameter
 * Return: 0(Success)
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for ( i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
