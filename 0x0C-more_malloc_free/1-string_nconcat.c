#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - program
*Return:0
*@s1:parameter
*@s2:parameter
*@n:argument
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char *ptr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;
ptr = malloc(len1 + n + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; j < n; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}
