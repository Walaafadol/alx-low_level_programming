#include "main.h"
/**
*_puts - check the code
*@str:  pointer
* Return: Always 0.
*/
void _puts(char *str)
{
int i;
for (i = 0; i != '\0'; i++)
{
_putchar(str[i]);
}
}
