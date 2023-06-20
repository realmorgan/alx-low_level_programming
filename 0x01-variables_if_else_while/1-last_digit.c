#include <stdio.h>
/**
 * main - assign a random number to the variable n
 *
 * Return: (0)
 *
 */
int main(void)
{
	int n;
	int lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10;

	if (lastdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
		printf("Last digt of %d is %d and is 0\n", n, lastdgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
