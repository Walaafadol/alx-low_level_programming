#include "main.h"
/**
*_puts - check the code
*@str:  pointer
* Return: Always 0.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
