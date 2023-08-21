#include "main.h"
/**
*print_rev - check the code
*@s:  pointer
* Return: Always 0.
*/
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
for (i = i - 1; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
