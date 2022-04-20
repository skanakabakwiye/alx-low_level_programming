#include "main.h"
/**
 * rev_string - reverse a string
 *@s: character
 */

void rev_string(char *s)
{
	int n;
	char rev;
	int r = 0;
	int z = 0;
	
	while (s[r] != '\0')
	{
		r++;
	}
	
	z = r - 1;
	
	for (n = 0; n < r/2; n++)
	{
		rev = s[n];
		s[n] = s[z];
		s[r--] = rev;
	}
}
