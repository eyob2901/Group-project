#include "main.h"

/**
 * printstr- print str.
 * @format: format str.
 * Return: number str for print.
 */
int printstr(char *format, va_list)
{
char *string = va_arg(pa, char *);
int contador;
(void)format;

if (string == NULL)
string = "(null)";
contador = _puts(string);
return (contador);
}
