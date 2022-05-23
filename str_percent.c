#include "main.h"

/**
 * str_percent - pass the percent sing
 * @argu: list of arguments
 *
 * Return: the percent sing found
 */

char *str_percent(va_list argu)
{
	char *str;

	str = "%";
	if (va_arg(argu, int) == *str)
	{
		return (str);
	}
	return (str);
}
