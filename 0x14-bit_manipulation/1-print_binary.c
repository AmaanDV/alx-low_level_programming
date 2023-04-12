#include "main.h"
/**
 * @Amaan this code would print the binary equivalent of a decimal number
 * and display to the screen 
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
