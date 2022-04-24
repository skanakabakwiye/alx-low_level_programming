#include "main.h"
/*
 * *_strcat - concatenate two strings
 * @dest: string
 * @src: string
 * return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = _strlen(dest);
	int src_length = _strlen(src);
	int size = dest_length + src_length + 1;
	char *s;
	int i;

	for (int i = 0; i < dest_length; i++)
		s[i] = dest[i];

	for (int i = 0; i < src_length; i++)
		s[dest_length+i] = src[i];

	s[size-1] = '\0';

	return (dest);
