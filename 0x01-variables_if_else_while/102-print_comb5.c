#include <stdio.h>

/**
 * Main - Print all possible combinations of three numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n, l;

        for (n = 0; n < 100; n++)
        {
                  for (l = 0; l < 100; l++)
                  {
                           if (n < l)
                            {
                                  putchar((n / 10) + 48);
                                  putchar((n % 10) + 48);
                                  putchar(' ');
				  putchar((l / 10) + 48);
                                  putchar((l % 10) + 48);
                                  if (n != 98 || l != 99)
                                  {
                                        putchar(',');
                                        putchar(' ');
                                  }
                            }
                   }
                
        }
         putchar('\n');
         return (0);
}
