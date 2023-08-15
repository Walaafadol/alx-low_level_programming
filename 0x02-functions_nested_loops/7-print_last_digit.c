#include "main.h"

/**
 * print_last_digit - check the code.
 * Return:1 if c is lowercase
 * @c:  is parameter
 */
int print_last_digit(int c)
{
int last;
last = c % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
