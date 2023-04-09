#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num  of m
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	m = ~(1 << index);
	*n = *n & m;

	return (1);
}

