#include "main.h"
/**
 * _strcat - concatenates two strings
 * @buf: string of destiny
 * @src: string of source
 * Return: dest string
 */
void *_strcat(char *buf, char *src)
{
	int i, j;

	for (i = 0; buf[i] != 00; i++)
	{
	}
	for (j = 0; src[j] != 00; j++, i++)
	{
		buf[i] = src[j];
	}
	return (buf);
}
