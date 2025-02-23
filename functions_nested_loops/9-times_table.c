#include "main.h"
#include <stdio.h>  /* Ajoute ce fichier d'en-tête pour printf */

/**
 * times_table - affiche la table de multiplication de 0 à 9
 *
 * Return: rien
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)
	{
	for (col = 0; col < 10; col++)
	{
	product = row * col;
	if (col != 0)
		{
	printf(", ");
		}
	printf("%d", product);
	}
	printf("\n");
	}
}

