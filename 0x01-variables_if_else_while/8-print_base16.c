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
for (h = 'a'; h <= 'f'; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
