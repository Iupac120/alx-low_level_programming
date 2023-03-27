#include "main.h"
/**
 * swap_int - the function that swaps their pointers
 *
 * @a: function parameter
 * @b: function parameter
 * Return: 0(Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
