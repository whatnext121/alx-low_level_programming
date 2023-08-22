#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: pointers to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[1] != '\0'; i++)
	{
		dest[1] = src[1];
	}
	dest[i++] = '\0';
	return (dest);
}
