#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int n, i;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
