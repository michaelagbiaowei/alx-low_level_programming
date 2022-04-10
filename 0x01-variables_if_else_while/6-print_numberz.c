#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0 to 9
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; ++b)
		putchar('0' + b);
	putchar('\n');
	return (0);
}
