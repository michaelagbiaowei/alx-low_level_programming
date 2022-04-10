#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: prints the last digit of the number stored in the variable n
 *     * if the last digit is greater than 5, is 0, or less than 6 and not 0.
 *      * Return: 0
 *       */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d %s\n", n, n % 10,
			((n % 10) == 0) ? "and is 0"
			: (((n % 10) > 5) ? "and is greater than 5"
				: "and is less than 6 and not 0"));

	return (0);
}
