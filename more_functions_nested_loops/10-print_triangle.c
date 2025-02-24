#include "main.h"

/**
 * print_triangle - Affiche un triangle avec le caractère '#'
 * @size: Taille du triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' '); /* Affiche les espaces */
			for (j = 1; j <= i; j++)
				_putchar('#'); /* Affiche les # */
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
