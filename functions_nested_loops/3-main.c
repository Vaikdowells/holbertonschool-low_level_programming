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

	printf("%c: %d\n", c1, _islower(c1)); /* Doit afficher "a: 1" */
	printf("%c: %d\n", c2, _islower(c2)); /* Doit afficher "Z: 0" */

	return (0);
}

