#include "main.h"

/**
 * @Amaan this code would  set a bit at and a given index to 1 and return a value of 
 * one or zero
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

