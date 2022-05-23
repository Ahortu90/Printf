#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct prin - structure that contain flag and funtion
 * @flag: character that identify funtion
 * @fn: pointer to funtion
 */

typedef struct prin
{
	char flag;
	char *(*fn)(va_list argu);
} sir;
void *_calloc(unsigned int nmemb, unsigned int size);
int _strncat(char *buff, const char *format, int n);
char *fntn(const char symbl, va_list);
void *_strcat(char *dest, char *src);
char *str_chr(va_list argu);
char *str_str(va_list argu);
int _strlen(char *s);
int _printf(const char *format, ...);
char *str_percent(va_list argu);
char *str_int(va_list argu);
#endif
