#include "main.h"
/*
 * *_strcat - concatenate two strings
 * @dest: string
 * @src: string
 * return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int s = -1, i;
	
	for (i = 0; dest[i] != '\0'; i++)
	;

	do {
	s++;
	dest[i] = src[s];
	i++;
	} 
	while (src[s] != '\0');

	return (dest);
}
