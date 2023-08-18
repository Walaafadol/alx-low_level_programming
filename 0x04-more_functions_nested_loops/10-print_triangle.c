#include "main.h"

/**
 * print_triangle - check the code
 * @size:parameter
 * Return: Always 0.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int c, b, z;
for (c = 0; c < size; c++)
{
for (b = size - c; b > 1 ; b--)
{
_putchar('#');
}
for (z = 0; z <= c; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
