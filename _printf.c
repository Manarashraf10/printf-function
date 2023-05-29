#include "main.h"
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format.
 * @format:  is a character string.
 * Return: the number of characters printed 
*/
int _printf(const char *format, ...)
{
	va_list p;
	int i, j, sum, count;
	sp_fire spf[]={
		{"c", char_format},
		{"s", string_format},
		{"i", intger_format},
		{"d", decimal_format},
		{NULL, NULL}
	};

	i = 0;
	sum = 0;
	count = 0;
	va_start(p, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			i++;
			j = 0;
			while(j < 4)
			{
				if (spf[j].sp == format[i])
				{
					spf[j].f(p);
					sum += spf[j].f;
					break;
				}
				j++;
			}
		}
		_putchar(format[i]);
		i++;
	}
	va_end(p);
	count = i + sum;
	return (count);
}
