#include "main.h"
/**
*_strcat - check the code
*@dest:parameter
*@src:parameter
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
_putchar(dest[i]);
}
for (j = 0; src[j] != '\0'; j++)
{
_putchar(src[j]);
}
}
