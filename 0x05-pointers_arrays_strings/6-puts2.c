#include "main.h"
/**
 * puts2 - function prints every other charactr of a string
 *@str: variable
 */

void puts2(char *str)
{
	char str[20] = "Sample string";
	int i = 0;
	while(str[i] != '\0')
	{
		str+=2;
	}
}

