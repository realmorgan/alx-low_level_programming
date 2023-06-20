#include <stdio.h>
/**
 * main - print hexadecimal numbers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char nums = '0';
	char letters = 'a';

	while (nums <= '9')
	{
		putchar(nums);
		nums++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
