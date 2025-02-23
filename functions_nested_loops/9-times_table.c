#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)  /* Loop for each row (0 to 9) */
	{
		for (col = 0; col < 10; col++)  /* Loop for each column (0 to 9) */
		{
			product = row * col;  /* Multiply row by column */
			if (col == 0)
			{
				_putchar(product + '0');  /* Print first number (no space before it) */
			}
			else
			{
				_putchar(',');  /* Print a comma */
				_putchar(' ');  /* Print a space after the comma */
				if (product < 10)
				{
					_putchar(' ');  /* Print extra space for single-digit results */
				}
				_putchar(product + '0');  /* Print the product */
			}
		}
		_putchar('\n');  /* Move to the next line after each row */
	}
}


