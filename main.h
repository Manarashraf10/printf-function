#ifndef main_h
#define main_h
#include <stdio.h>
#include <unistd.h>

/**
 * struct specifier - Struct specifier
 *
 * @sp: The operator
 * @f: The function associated
 */
typedef struct specifier
{
    char *sp;
    int (*f)(int a, int b);
} sp_fire;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int char_format(va_list p);
int string_format(va_list p);
int percent_format(va_list p);
void (*select_format(char *format))







#endif

