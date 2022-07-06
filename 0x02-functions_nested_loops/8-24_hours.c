#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * n from 0:00 to 23:59, min and hours
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int min_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_remainder = hours % 10;
			min_remainder = minutes % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(min_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
