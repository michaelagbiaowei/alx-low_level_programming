@@ -0,0 +1,19 @@
#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
 29  
0x05-pointers_arrays_strings/100-atoi.c
@@ -0,0 +1,29 @@
#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
 39  
0x05-pointers_arrays_strings/101-keygen.c
@@ -0,0 +1,39 @@
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772, i = 0, j, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		password[i] = ascii;
	else
	{
		i--;
	}


	for (j = 0; j <= i; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}
