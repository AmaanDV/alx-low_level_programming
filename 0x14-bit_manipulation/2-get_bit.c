#include "main.h"
/**
 * @Amaan this code would return the value of a bit at an index in a decimal number
 * and output to the screen 
 *
 *
 * 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

