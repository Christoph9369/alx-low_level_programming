#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @b: number to print in binary
 */
void print_binary(unsigned long int b)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = b >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}