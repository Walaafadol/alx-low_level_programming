#include "main.h"

/**
 * print_line - check the code
 * @n:parameter
 * Return: Always 0.
 */
void print_line(int n)
{
if (n > 0)
{
int c = n;
for ( ; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
