#include <stdio.h>

/**
 * print_to_98 - Imprime tous les nombres naturels de n à 98.
 * 
 * @n: Le nombre de départ.
 *
 * Return: Rien.
 */
void print_to_98(int n)
{
    if (n < 98)
    {
        for (; n < 98; n++)
        {
            printf("%d, ", n);
        }
    }
    else if (n > 98)
    {
        for (; n > 98; n--)
        {
            printf("%d, ", n);
        }
    }

    printf("98\n");
}
