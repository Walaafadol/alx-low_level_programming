#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int h;
for (h = '0'; h <= '9'; h++)
{
putchar(h);
}
for (h = 'A'; h <= 'F'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
