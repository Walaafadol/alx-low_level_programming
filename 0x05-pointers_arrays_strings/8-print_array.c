#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - check the code
*@a: pointer
*@n: pointer
* Return: Always 0.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n-1)
{
printf(",");
}
}
printf("\n");
}
