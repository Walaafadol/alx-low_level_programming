#include "main.h"

/**
 * print_square - check the code
 * @size:parameter
 * Return: Always 0.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;
for (row = size; row > 0; row--)
{
for (col = size; col > 0; col--)
{
_putchar('#');
}
_putchar('\n');
}
}
}

