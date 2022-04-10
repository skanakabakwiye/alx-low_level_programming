#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;
	long int b;
	long long int k;
	char s;
	float a;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}

