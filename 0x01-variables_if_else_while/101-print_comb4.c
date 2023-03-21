#include <stdio.h>
/**
 * main - combination 3
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
	for (j = 1 ; j < 10 ; j++)
	{
	for (k = 2 ; k < 10 ; k++)
	{
	if (i < j && j < k)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	if (i == 7 && j == 8)
	continue;
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
