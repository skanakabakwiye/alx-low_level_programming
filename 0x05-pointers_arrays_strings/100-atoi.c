#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: character
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int a, b, c, d, e, g;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	g = 0;

	while (s[a] != '\0')
		a++;

	while (b < a && c == 0)
	{
		if (s[b] == '-')
			++d;

		if (s[b] >= '0' && s[b] <= '9')
		{
			g = s[b] - '0';
			if (d % 2)
				g = -g;
			e = e * 10 + g;
			c = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			c = 0;
		}
		b++;
	}

	if (c == 0)
		return (0);

	return (e);
}
