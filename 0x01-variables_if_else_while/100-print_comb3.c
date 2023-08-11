#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int a;
int b;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
for (b = '0'; b <= '9'; b++)
{
putchar(b);
}
putchar(',');
putchar(' ');
}
return (0);
}


