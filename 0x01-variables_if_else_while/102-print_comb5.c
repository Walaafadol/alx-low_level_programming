#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int  a = 0;
int b;
for (a = 0; a <= 99; a++)
{
b = a;
for (b = 0; b <= 99; b++)
{
if (b != a)
{
putchar((a / 10) + 48);
putchar((a % 10) + 48);
putchar(' ');
putchar((b / 10) + 48);
putchar((b % 10) + 48);
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
