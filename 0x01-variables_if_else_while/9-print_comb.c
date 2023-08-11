#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int w;
for (w = '0'; w <= '9'; w++)
{
putchar(w);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
