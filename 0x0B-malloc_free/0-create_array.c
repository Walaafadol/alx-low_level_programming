#include "main.h"
#include <stdlib.h>

/**
*create_array - program
*Return:0
*@c:parameter
*@size:argument
*/
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
{
return (NULL);
}
else
{
while (size--)
n[size] = c;
return (n);
}
}
