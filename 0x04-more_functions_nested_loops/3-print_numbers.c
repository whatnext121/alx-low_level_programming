#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: The number since 0 up to 9
 */

void print_numbers(void)

{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');

}
