#include <stdio.h>
/**
 * main - Entry point
 * Description: Different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int n;
	int b;

	for (n = 0; n < 10; n++)
	{
		for (b = 1; b < 10; b++)
		{

			if (n < b && n != b)
			{
				putchar(n + '0');
				putchar(b + '0');
				if (n + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
