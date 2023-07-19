#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = j + i;
			if (j == 0)
			{
				_putchar(a + '0');
			}

			if (a < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
