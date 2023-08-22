#include "main.h"

/**
 * swap_int - swap two integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
