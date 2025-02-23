#include "main.h"

/**
 * jack_bauer - Prints every minute of Jack Bauer's day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)  /* Loop through each hour (00 to 23) */
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + '0');  /* Print the first digit of the hour */
			_putchar(hour % 10 + '0');  /* Print the second digit of the hour */
			_putchar(':');  /* Print the colon between hour and minute */
			_putchar(minute / 10 + '0');  /* Print the first digit of the minute */
			_putchar(minute % 10 + '0');  /* Print the second digit of the minute */
			_putchar('\n');  /* New line after each time printed */
		}
	}
}
