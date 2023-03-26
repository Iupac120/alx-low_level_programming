#include <stdio.h>
#include <unistd.h>
/**
 * main - function that prints fibonnaci number from 1 and 2
 *
 * Return: 0(Success)
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long sum;
	int count;

	a = 0;
	b = 1;

	for (count = 0 ; count < 50 ; count++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
