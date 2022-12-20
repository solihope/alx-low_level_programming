#include "main.h"

/**
 * swap_int - swaps value of twon intigers
 * @a: int to swap
 * @b: int tp swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
