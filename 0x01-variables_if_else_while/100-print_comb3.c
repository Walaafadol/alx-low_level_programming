#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int a;
int b;
a = b = '0';
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
}
if ((a != '9') || (a == '9' && b != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}


