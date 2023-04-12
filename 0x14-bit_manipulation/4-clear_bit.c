#include "main.h"

/**
 * @Amaanthis code would set the value of a given bit to 0
 * And return a value 
 */
int clear bit (unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}

