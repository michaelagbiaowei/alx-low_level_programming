#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  main function
 * Description: task 2
 * Return: 0 always (Success)
 */
int main(void)
{
	int n;

	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
