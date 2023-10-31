#include <stdlib.h>
#include "main.h"

/*
 * create_array - create an array of char.
 * @size - size of array.
 * @c - character to be initailised.
 * @description - an array to be initialised with c.
 * Return: a pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	return (ptr);
}
