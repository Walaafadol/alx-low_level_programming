#include "main.h"
/**
* puts2 - check the code
*@str:  pointer
* Return: Always 0.
*/
void puts2(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
if (str[index] % 2 == 0)
{
_putchar(str[index]);
}
}
_putchar('\n');
}
