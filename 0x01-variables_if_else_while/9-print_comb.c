#include <stdio.h>
/**
 * main - print numbers separated by commas & a space
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		if (nums <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');
	return (0);
}
