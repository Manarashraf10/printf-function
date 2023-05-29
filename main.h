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
void (*select_format(char *format))







#endif

