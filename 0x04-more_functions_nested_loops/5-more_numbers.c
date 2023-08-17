#include "main.h"

/**
 * more_numbers - check the code
 * void
 * Return: Always 0.
 */
void more_numbers(void)
{
int c, b;
for (c = 0; c <= 9; c++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
