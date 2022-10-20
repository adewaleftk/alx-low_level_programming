#include "main.h"

/**
 * print_line - draws a straight line, using '_'
 * @n: the number of times to print '_'
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
