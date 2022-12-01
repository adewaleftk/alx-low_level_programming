#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 *
 * @n: the number
 * @index: the index to clear
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	(*n) &= ~(1 << index);
	return (1);
}
