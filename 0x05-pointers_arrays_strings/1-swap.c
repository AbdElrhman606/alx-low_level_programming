#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *i, int *j)
{
	int l;

	l = *i;
	*i = *j;
	*j = l;
}
