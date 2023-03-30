#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @a: The integer to prints
 * Return: Nothing!
 */

void print_number(int a)

{
	unsigned int c = a;

	if (a < 0)
	{
		a *= -1;
		c = a;
		_putchar('-');
	}
	c /= 10;
	if (c != 0)
		print_number(c);
	_putchar((unsigned int) a % 10 + '0');
}
