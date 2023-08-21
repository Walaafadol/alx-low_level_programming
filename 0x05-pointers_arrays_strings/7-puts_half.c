#include "main.h"
/**
* puts_half - check the code
*@n:  pointer
*@str: Always 0.
*/
void puts_half(char *str)
{
int i;
int hav;
for (i = 0; str[i] != '\0'; i++)
;
hav = i / 2;
while (hav != '\0')
{
_putchar(str[hav]);
hav++;
}
_putchar('\n');
}
