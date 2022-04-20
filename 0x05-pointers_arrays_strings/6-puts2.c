#include "main.h"
/**
 * puts2 - function prints every other charactr of a string
 *@str: variable
 */

void puts2(char *str)
{
	int i = 0;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}

	for (a = 0; a < i; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
