#include "main.h"

/**
 * @Amaanthis code would set the value of a given bit to 0
 * And return a value 
 */
int clear bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

