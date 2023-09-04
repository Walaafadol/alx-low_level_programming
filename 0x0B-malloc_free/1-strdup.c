#include <stdlib.h>
#include "main.h"


/**
*_strdup - program
*Return:0
*@str:parameter
*/
char *_strdup(char *str)
{
int size, i;
char *n;
if (str == NULL)
return (NULL);
for (size = 0; str[size] != '\0'; size++)
;
n = malloc(size * sizeof(*str) + 1);
if (n == 0)
return (NULL);
for (i = 0; i < size; i++)
n[i] = str[i];
return (n);
}
