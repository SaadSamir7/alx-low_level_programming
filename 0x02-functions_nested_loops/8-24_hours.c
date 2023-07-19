#include "main.h"
/**
 * jack_bauer -> Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59 every minute of the day 
 */
void jack_bauer(void)
{
	int minute = 0;
	int x = 0, w = 0, y = 0, z = 0;

	while (minute < 1440)
	{
		_putchar(x + '0');
		_putchar(w + '0');
		_putchar(':');
		_putchar(y + '0');
		_putchar(z + '0');
		_putchar('\n');

		d++;
		if (z > 9)
		{
			z = 0;
			y++;
		}
		if (y > 5)
		{
			y = 0;
			w++;
		}
		if (w > 9)
		{
			w = 0;
			x++;
		}
		minute++;
	}
}
