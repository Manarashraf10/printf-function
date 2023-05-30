#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags
 * @plus: flag for '+' character
 * @space: flag for ' ' character
 * @hash: flag for '#' character
*/
typedef struct flags
{
	unsigned int plus   : 1;
	unsigned int space  : 1;
	unsigned int hash   : 1; 
} flags_t;

/**
 * struct specifier - Struct specifier
 *
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct specifier
{
char c;
int (*f)(va_list p, flags_t *f);
} sp;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int char_format(va_list p, flags_t *f);
int string_format(va_list p, flags_t *f);
int percent_format(va_list p, flags_t *f);
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);






#endif

