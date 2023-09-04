#include <stdlib.h>
#include "main.h"
/**
*_strlen - program
*Return:0
*@s:parameter
*/
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}
/**
*str_concat - program
*Return:0
*@s1:parameter
*@s2:argument
*/
char *str_concat(char *s1, char *s2)
{
int size1, size2;
char *n;
int i;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
n = malloc((size1 + size2) *sizeof(char) + 1);
if (n == 0)
return (0);
for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
n[i] = s1[i];
else
n[i] = s2[i - size1];
}
n[i] = '\0';
return (n);
}
