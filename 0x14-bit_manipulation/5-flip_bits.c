#include "main.h"

/**
 * flip_bits-  returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int old;
	unsigned long int new = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		old = new >> i;
		if (old & 1)
			j++;
	}
	return (j);
}
