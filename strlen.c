#include "main.h"

/**
 * _strlen - length of string
 *@s: input pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 00)
	{
		i++;
	}
	return (i);
}
