#include <stdio.h>
/**
 * main - A program of alphabet in reverse
 * Return: 0(Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
