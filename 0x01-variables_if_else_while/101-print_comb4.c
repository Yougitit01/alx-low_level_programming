#include <stdio.h>
/**
 * main - Entry point
 * Description: Different combination of three digits
 * Return: Always 0
 */
int main(void)
{
	int e;
	int f;
	int g;

	for (e = 0; e < 10; e++)
	{
		for (f = 1; f < 10; f++)
		{
			for (g = 2; g < 10; g++)
			{
				if (e < f && f < g)
				{
					putchar(e + '0');
					putchar(f + '0');
					putchar(g + '0');
					if (e + f + g  != 24)
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
