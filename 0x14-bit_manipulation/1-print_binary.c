#include "main.h"
/**
*print_binary - program
*Return:0
*@n:argument
*/
void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8, print = 0;
while (bit)
{
if (n & 1l << --bit)
{
_putchar('1');
print++;
}
else if (print)
_putchar('0');
}
if (!print)
_putchar('0');
}
