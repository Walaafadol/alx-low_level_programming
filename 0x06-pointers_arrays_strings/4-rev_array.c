#include "main.h"
#include <stdio.h>
/**
*reverse_array- check the code
*@a:parameter
*@n:parameter
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
int i, j, counter;
for (i = 0, j = (n - 1); i < j; i++, j--)
{
counter = a[i];
a[i] = a[j];
a[j] = counter;
}
}
