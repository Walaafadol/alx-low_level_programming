#include "main.h"
/**
*_memcpy - check the code
*@b:parameter
*@n:parameter
*@s:parameter
* Return: Always 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
