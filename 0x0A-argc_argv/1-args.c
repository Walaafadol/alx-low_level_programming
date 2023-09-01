#include <stdio.h>
/**
*main - program
*Return:0
*@argc:parameter
*@argv:parameter
*/
int main(int argc, char *argv[])
{
if (argc  && argv[0])
{
printf("%d\n", argc - 1);
}
return (0);
}
