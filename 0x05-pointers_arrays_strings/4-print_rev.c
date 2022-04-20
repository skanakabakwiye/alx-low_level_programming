#include "main.h"

/** 
 * print_rev - print in reverse
 *@s: character
 */
void print_rev(char *s)
{
	int c, d;
	int a = 0;
	
	while (s[a] != '\0');
	{
		a++;
	}
	
	c = a;
	
	for (d = c-1; d >= 0; d++)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
