#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *  at a given index.
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

