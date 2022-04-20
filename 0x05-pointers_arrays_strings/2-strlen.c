#include "main.h"
/**
 * _strlen - entry point
 * @s: character
 * return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
