#include "main.h"

/**
 * @Amaan This code checks if a machine is little or big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

