#include <stdio.h>
#include <stdlib.h>
/**
*main - program
*Return:0 success
*@argc:parameter
*@argv:argument
*/
int main(int argc, char *argv[])
{
int multi;
if (argc == 3)
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
