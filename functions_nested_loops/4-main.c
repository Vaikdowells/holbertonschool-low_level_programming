#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char c1 = 'a';
	char c2 = 'Z';
	char c3 = '5';

	printf("%c: %d\n", c1, _isalpha(c1)); /* Doit afficher "a: 1" */
	printf("%c: %d\n", c2, _isalpha(c2)); /* Doit afficher "Z: 1" */
	printf("%c: %d\n", c3, _isalpha(c3)); /* Doit afficher "5: 0" */

	return (0);
}
