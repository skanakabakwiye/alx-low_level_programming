#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: copied string
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
