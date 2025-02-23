#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)  /* Loop through rows (0 to 9) */
    {
        for (j = 0; j < 10; j++)  /* Loop through columns (0 to 9) */
        {
            result = i * j;

            /* Print the result with appropriate spacing */
            if (j == 0)
                printf("%2d", result);  /* Print the first number in each row */
            else
                printf(", %3d", result);  /* Print subsequent numbers with proper spacing */
        }
        printf("\n");  /* New line after each row */
    }
}

