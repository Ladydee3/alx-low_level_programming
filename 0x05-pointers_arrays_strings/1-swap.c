#include <stdio.h>

/**
 * swap_int - Swsps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swaped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the fuction that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
