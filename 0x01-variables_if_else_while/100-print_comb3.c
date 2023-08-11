#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int  a = 0;
int b;
for (a = 0; a <= 9; a++)
{
b = 0;
for (b = 0; b <= 9; b++)
{
if (a != b && a < b)
{
putchar(a + 48);
putchar(b + 48);
if (a + b != 17)
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
