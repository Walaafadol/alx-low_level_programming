#include <stdio.h>
/**
*main - program
*Return:0
*@argc:parameter
*@argv:argument
*/
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
