#include <stdlib.h>
#include <time.h>
/**
*main - aprogram that print results
*Return:0 (sussess)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d n is positive\n");
}
else if (n == 0)
{
ptintf("%d n is zero\n");
}
else if (n < 0)
{
printf("%d n is negative\n");
}
return (0);
}
