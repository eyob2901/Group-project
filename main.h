#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
char *q;
int (*u)(char *format, va_list);
} structype;

int _putchar(char c);
int _puts(char *string);
int printc(char *format, va_list pa);
int printstr(char *format, va_list);
int print_rev(va_list r);
int print_rot13(va_list R);
int _printf(char *format, ...);
int integer(int number);
int (*find_function(const char *format))(va_list);
#endif
