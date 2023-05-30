#include "main.h"
/**
 * char_format - a function that print characters
 * @p: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int char_format(va_list p)
{
	char *array;
	int j;

	j = 0;
	array = va_arg(p, int);
	while (p != '\0')
	{
		_putchar(array[j]);
		j++;
	}
	return (j);
}
/**
 * string_format - a function print string
 * @p: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int string_format(va_list p)
{
	char *s = va_arg(p, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
