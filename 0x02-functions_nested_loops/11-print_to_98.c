#include "main.h"

/**
 * print_to_98 - check the code.
 * Return:1 if c is lowercase
 * @n:  is parameter
 */
void print_to_98(int n)
{
if (n <= 98)
{
int z;
for (z = n; z <= 98; z++)
{
_putchar(z);
}
}
else if (n > 98)
{
int w;
for (w = n; w <= 98; w--)
{
_putchar(w);
}
}
}
