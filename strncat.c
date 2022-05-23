#include "main.h"

/**
 * _strncat - concatenate two strings
 * @buff: string of destiny
 * @format: source string
 * @n: possition in format
 * Return: dest string
 */

int _strncat(char *buff, const char *format, int n)
{
	int i;

	i = 0;
	while (buff[i] != 00)
	{
		i++;
	}
	while (format[n] != 00 && format[n] != 37)
	{
		buff[i] = format[n];
		i++;
		n++;
	}
	return (n);
}
