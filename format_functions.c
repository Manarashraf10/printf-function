#include "main.h"
/**
 * char_format - a function that print characters
 * @1: va_list arguments from _printf
 * @f: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int char_format(va_list 1, flags_t *f)
{
	(void)f;
	_putchar(va_arg(1, int));
	return (1);
}
/**
 * string_format - a function print string
 * @1: va_list arguments from _printf
 * @f: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int string_format(va_list 1, flags_t *f)
{
	char *s = va_arg(1, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
