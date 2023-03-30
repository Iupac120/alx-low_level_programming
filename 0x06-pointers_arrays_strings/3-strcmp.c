#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two string
 * @s1: function parameter
 * @s2: function parameter
 * Return: 0(Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[1] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (0);


		}
	}
	return (0);
}

