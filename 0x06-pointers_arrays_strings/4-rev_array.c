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
for (i = 0; i < n && a[i] != '\0'; i++)
counter++;
for (j = counter; a[j] != '0'; j--)
{
printf("%d", a[j]);
}
}
