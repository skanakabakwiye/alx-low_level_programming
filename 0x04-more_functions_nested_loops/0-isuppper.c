#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
    char c;
    while(c = 'A')
    {
    printf("%c: %d\n", c, _isupper(c));
    }
    while (c = 'a')
    {
    printf("%c: %d\n", c, _isupper(c));
    }
    return (0);
