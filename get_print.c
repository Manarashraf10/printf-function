#include "main.h"

/**
 * get_print - finds the format function
 * @s: the format string
 * Return: the number of bytes printed
*/

int (*get_print(char s))(va_list, flags_t *)
{
	sp func_arr[] = {
		{'s', string_format},
		{'c', char_format},
		{'%', percent_format}
	};
	int flags = 3;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
