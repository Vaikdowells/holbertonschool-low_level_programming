#include "main.h"

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
            if (result < 10)
            {
                _putchar(' ');  /* Add a space before single digit numbers */
                _putchar(result + '0');  /* Convert int to char and print */
            }
            else
            {
                _putchar(result / 10 + '0');  /* Print the tens digit */
                _putchar(result % 10 + '0');  /* Print the ones digit */
            }

            if (j < 9)
            {
                _putchar(',');  /* Print comma */
                _putchar(' ');  /* Print space after comma */
            }
        }
        _putchar('\n');  /* New line after each row */
    }
}

