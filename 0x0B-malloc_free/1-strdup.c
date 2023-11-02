#include <stdlib.h>
#include "main.h"

/* 
 * _strdup -  function returns a pointer to a new string.
 * @str - a pointer to a string.
 * return: a character pointer.
 */
char *_strdup(char *str)
{
	int str_len, i;
	char *ptr;

	for(str_len = 0; str_len != '\0'; str_len++)
	ptr = (char *)malloc(str_len * sizeof(char));
		if (ptr == 0)
			return (NULL);
	for(i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

