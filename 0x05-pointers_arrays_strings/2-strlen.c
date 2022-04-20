#include "main.h"
/**
 * _strl - entry point
 * @s: character
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}

