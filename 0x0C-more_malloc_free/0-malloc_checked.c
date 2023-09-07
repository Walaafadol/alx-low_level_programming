#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - program
*Return:0
*@b:parameter
*/
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == 0)
exit(98);
return (ptr);
}
