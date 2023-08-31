#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @c: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *c, unsigned int index)
{
	if (index > 63)
		return (-1);

	*c = ((1UL << index) | *c);
	return (1);
}
