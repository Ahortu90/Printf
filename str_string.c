#include "main.h"
/**
 * str_str - print a string
 * @argu: list of arguments
 *
 * Return: the string found
 */
char *str_str(va_list argu)
{
	char *str = va_arg(argu, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	return (str);
}
