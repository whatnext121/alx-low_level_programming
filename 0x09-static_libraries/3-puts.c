#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
        while (*str)
                _putchar(*str++);
        return ('\n');
}
