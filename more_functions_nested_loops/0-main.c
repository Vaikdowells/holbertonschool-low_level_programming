#include "main.h"
#include <stdio.h>

/**
 * main - Test the _isupper function
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c)); /* Devrait afficher 1 */

	c = 'a';
	printf("%c: %d\n", c, _isupper(c)); /* Devrait afficher 0 */

	c = 'Z';
	printf("%c: %d\n", c, _isupper(c)); /* Devrait afficher 1 */

	c = 'z';
	printf("%c: %d\n", c, _isupper(c)); /* Devrait afficher 0 */

	c = '5';
	printf("%c: %d\n", c, _isupper(c)); /* Devrait afficher 0 */

		return (0);
}
