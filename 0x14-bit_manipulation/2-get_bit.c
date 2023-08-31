#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @c: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int c, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (c >> index) & 1;

	return (bit_val);
}
