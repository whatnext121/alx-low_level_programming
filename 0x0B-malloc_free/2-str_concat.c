#include <stdlib.h>
#include "main.h"
/*
 * str_concat - Concatenates two string.
 * @s1 - first string.
 * @s2 - Second string.
 * Return: pointer to new memory location.
 */
char *str_concat(char *s1, char *s2)
{       
        unsigned int str_len1, str_len2, i, j;
        char *ptr;
        if (s1 == NULL)
        {       
                s1 = "";
        }       
        if (s2 == NULL)
        {
                s2 = "";
        }       
        for (str_len1 = 0;s1[str_len1] != '\0'; str_len1++)
        for (str_len2 = 0;s2[str_len2] != '\0'; str_len2++)
        
        ptr = malloc(sizeof(char) * (str_len1 + str_len2 + 1));
        if (ptr == NULL)
        {       
                return (NULL);
        }       
	for (i = 0; i < str_len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < str_len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}


