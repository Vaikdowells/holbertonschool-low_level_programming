#include "main.h"
#include <stdio.h>

/**
 * main - Teste la fonction mul
 *
 * Return: Always 0.
 */
int main(void)
{
    int result;

    result = mul(2, 3);
    printf("2 * 3 = %d\n", result); /* Doit afficher 6 */

    result = mul(-4, 5);
    printf("-4 * 5 = %d\n", result); /* Doit afficher -20 */

    result = mul(0, 10);
    printf("0 * 10 = %d\n", result); /* Doit afficher 0 */

    return (0);
}
