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
for (b = '0'; b <= '9'; b++)
{
putchar(a);
putchar(b);
}
putchar(',');
putchar(' ');
}
return (0);
}


