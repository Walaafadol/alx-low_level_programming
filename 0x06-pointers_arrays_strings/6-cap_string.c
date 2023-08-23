#include "main.h"
/**
*cap_string- check the code
*@src:parameter
* Return: Always 0.
*/
char *cap_string(char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
if (src[i] >= 97 && src[i] <= 122)
{
src[i] = src[i] - 32;
}
else
{
src[i] = src[i];
}
}
return (src);
}
