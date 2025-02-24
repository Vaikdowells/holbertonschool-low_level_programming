#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14,
 *                suivi d'une nouvelle ligne.
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0'); /* Affiche le premier chiffre si >= 10 */
			_putchar((n % 10) + '0'); /* Affiche le dernier chiffre */
		}
		_putchar('\n');
	}
}

