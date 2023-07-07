#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 98)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}

