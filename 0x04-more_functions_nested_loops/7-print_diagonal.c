#include "main.h"

/**
 * print_diagonal - check the code
 * @n:parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int m ,u;
for (m = 0; m < n; m++)
{
for (u = 0; u < m; u++)
{
_putchar('\\');
}
_putchar(' ');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
