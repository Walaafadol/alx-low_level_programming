#include "main.h"
/**
*_memcpy - check the code
*@dest:parameter
*@src:parameter
*@n:parameter
* Return: Always 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int m = n;
for (i = 0; i < m; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
