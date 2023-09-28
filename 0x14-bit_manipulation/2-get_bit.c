#include "main.h"
/**
*get_bit - program
*Return:0
*@index:argument
*@n:argument
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit = sizeof(n) * 8;
if (index >= bit)
return (1);
return (n >> index & 1);
}
