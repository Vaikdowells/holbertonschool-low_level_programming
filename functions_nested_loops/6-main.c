#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-5);
	printf("abs(-5) = %d\n", r);
	r = _abs(0);
	printf("abs(0) = %d\n", r);
	r = _abs(10);
	printf("abs(10) = %d\n", r);

	return (0);
}
