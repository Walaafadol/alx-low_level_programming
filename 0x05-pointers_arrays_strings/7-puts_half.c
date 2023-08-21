#include "main.h"
/**
* puts_half - check the code
*@str:  pointer
*Return: Always 0.
*/
void puts_half(char *str)
{
int i;
int counter = 0;
int hav;
for (i = 0; str[i] != '\0'; i++)
counter++;
hav = counter / 2;
if (counter % 2 == 1)
{
hav = (counter + 1) / 2;
}
for (i = hav; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
