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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 8;
	if (ld > 0)
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("last digit of %d is %d and is 0\n", n, ld);
	else if (ld < 6)
		printf("last digit of %d id %d and less than 6 and not 0\n", n, ld);
	return (0);
}
