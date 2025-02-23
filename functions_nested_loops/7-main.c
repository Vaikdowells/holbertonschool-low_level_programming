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

	r = print_last_digit(98);
	printf(" -> Last digit of 98 is: %d\n", r);

	r = print_last_digit(0);
	printf(" -> Last digit of 0 is: %d\n", r);

	r = print_last_digit(-1024);
	printf(" -> Last digit of -1024 is: %d\n", r);

	return (0);
}
