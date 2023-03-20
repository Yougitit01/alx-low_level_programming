#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'to get the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	if (j > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("last digit of %d is %d and is  0\n", n, j);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and not 0\n", n, j);
	}
	return (0);
}
