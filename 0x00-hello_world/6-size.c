#include <stdio.h>
/**
* main  -printf programm
* Return:0 (succes
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char:%zu bytes\n", (unsigned long)sizeof(a));
printf("Size of an int:%zu bytes\n", (unsigned long)sizeof(b));
printf("Size of a long int:%zu bytes\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%zu bytes\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu bytes\n", (unsigned long)sizeof(e));
return (0);
}
