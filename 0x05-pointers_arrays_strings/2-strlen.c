#include "main.h"
/**
 * _strlen - length of a string
 * @s: character
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
