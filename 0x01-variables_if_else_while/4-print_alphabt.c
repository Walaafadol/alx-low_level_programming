#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
char i;

for (i = 'a'; i <= 'z' ; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}

