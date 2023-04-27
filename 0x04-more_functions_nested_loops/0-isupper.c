#include "main.h"
#include <stdio.h>

/**
 * _isupper - it takes one argument
 * @c: The character to be checked
 * Description: To check for uppercase characters
 * Return 1 if C is uppercase else return 0
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
