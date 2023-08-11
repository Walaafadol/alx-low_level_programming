#include <stdio.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
char i, k;

for (i = 'a'; i <= 'z' ; i++)
{
putchar(i);
}
for (k = 'A'; k <= 'Z' ; k++)
{
putchar(k);
putchar('\n');
}
return (0);
}

