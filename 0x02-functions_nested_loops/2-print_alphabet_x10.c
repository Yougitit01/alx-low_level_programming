#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char b;
	int d = 0;

	while (d <= 9)
	{
	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	d++;
	}
}
