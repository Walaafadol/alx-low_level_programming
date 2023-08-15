#include "main.h"
/**
* print_sign - check the code.
* Return:1 if c is lowercase
* @n:  is parameter
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n <  0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
