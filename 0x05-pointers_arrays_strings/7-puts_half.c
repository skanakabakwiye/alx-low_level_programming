#include "main.h"
/**
 * puts_half - print half of a string
 *@str: variable
 */

void puts_half(char *str)
{
	int a, b;
	int c = 0;

	while (str[c] !=0)
	{
		c++;
	}

	if (c%2 == 0)
	{
		for (a = c / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}

	else if (c%2)
	{
		for (b = (c - 1) / 2; b < c -1; b++)
		{
		_putchar(str[b+1]);
		}
	}
	_putchar('\n');
}
