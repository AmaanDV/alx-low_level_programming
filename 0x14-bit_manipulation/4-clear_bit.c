#include "main.h"

/**
 * @Amaanthis code would set the value of a given bit to 0
 * And return a value 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
