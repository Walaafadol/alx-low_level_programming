#include "main.h"
/**
*_strlen - check the code
*@s:  pointer
*Return: Always 0.
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	;
return (i);
}
