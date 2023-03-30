#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according paramater
 * @a: The number of times to print diagonallines
 * Return: empty
 */

void print_diagonal(int a)

{

	int c, d;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (c = 0; c < a; c++)
	{
	for (d = 0; d < a; d++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
