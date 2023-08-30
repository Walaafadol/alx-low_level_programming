#include "main.h"
/**
*_sqrt_recursion - check the code
*square - check the code
*@n:parameter
*Return: Always 0.
*/
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
*square - check the code
*@n:parameter
*@val:parameter
*Return: Always 0.
*/

int square(int n, int val)
{
if (n == val * val)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else
return (-1);
}
