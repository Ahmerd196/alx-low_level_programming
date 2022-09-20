#include "main.h"
/*
 * swap_int - swap two integer numbers.
 *
 * @a: first integer value
 * @b: second integer value
 *
 * Return: zero(0)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
