#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (n <= 90)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
