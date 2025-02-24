#include "main.h"
#include <stdio.h>

/**
 * main - Teste la fonction _isdigit
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c)); /* Doit afficher 1 */

    c = '9';
    printf("%c: %d\n", c, _isdigit(c)); /* Doit afficher 1 */

    c = 'a';
    printf("%c: %d\n", c, _isdigit(c)); /* Doit afficher 0 */

    c = '5';
    printf("%c: %d\n", c, _isdigit(c)); /* Doit afficher 1 */

    c = 'G';
    printf("%c: %d\n", c, _isdigit(c)); /* Doit afficher 0 */

    return (0);
}
