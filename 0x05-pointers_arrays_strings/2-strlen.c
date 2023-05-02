#include "main.h"

/**
 *_strlen - a function that returns the length of string
 *@s: pointer to string
 *Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
