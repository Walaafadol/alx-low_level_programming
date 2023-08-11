#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int  a = 0;
int b;
int c;
for (a = 0; a <= 9; a++)
{
b = 0;
for (b = 0; b <= 9; b++)
{
c = 0;
for (c = 0; c <= 9; c++)
if (a != b && a < b && b != c && b < c)
{
putchar(a + 48);
putchar(b + 48);
putchar(c + 48);
if (a + b + c != 24)
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

