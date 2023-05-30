#include "main.h"
/**
 * char_format - a function that print characters
 * @p: va_list arguments from _printf
 * @f: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int char_format(va_list p, flags_t *f)
{
	(void)f;
	_putchar(va_arg(p, int));
	return (1);
}
/**
 * string_format - a function print string
 * @p: va_list arguments from _printf
 * @f: is the pointer to the last fixed arrgument
 * Return: the number of printed characters
*/
int string_format(va_list p, flags_t *f)
{
	char *s = va_arg(p, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
