#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - a function that prints prime number
 * Return: 0(Success)
 */

int main(void)
{
	long int i;
	long int m;
	long int sum;

	i = 612852475143;
	sum = -1;
	while (i % 2 == 0)
	{
		sum = 2;
		i /= 2;
	}
	for (m = 3; m <= sqrt(i) ; m = m + 2)
	{
		while (i % m == 0)
		{
			sum = m;
			i = i / m;
		}
	}
	if (i > 2)
		sum = i;
	printf("%ld\n", sum);
	return (0);
}
