#include <stdio.h>
/**
 * Main - print all possible combination of single-digit numbers
 * Return: Always(Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
