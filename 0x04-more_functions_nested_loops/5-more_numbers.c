#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; 1 <= 10; i++)
	{
		if (j >= 10)
			_putchar('1');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
