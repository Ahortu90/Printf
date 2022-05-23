#include "main.h"
/**
 * str_int - prints a integer
 * @argu: list of arguments
 * Return: the integer found
 */
char *str_int(va_list argu)
{
	unsigned int abs, aux, numb, count;
	long int n;
	char *str;

	str = malloc(10 * sizeof(char));

	n = va_arg(argu, int);
	if (n < 0)
	{
		abs = (n * -1);
		str[0] = '-';
		count = 1;
	}
	else
	{
		abs = n;
		count = 0;
	}

	aux = abs;
	numb = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		numb = numb * 10;
	}
	while (numb >= 1)
	{
		str[count] = (((abs / numb) % 10) + 48);
		count++;
		numb = numb / 10;
	}
	return (str);
}
