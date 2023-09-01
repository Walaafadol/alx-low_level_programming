#include "main.h"
/**
**_strcpy - check the code
*@dest:  pointer
*@src: pointer
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
