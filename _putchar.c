#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * return: 1 on success
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
