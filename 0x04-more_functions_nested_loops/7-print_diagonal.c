#include "main.h"

/**
 * print_diagonal - check the code
 * @n:parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int m ,u;
for (m = 0; m < n; m++)
{
for (u = 0; u < m; u++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
