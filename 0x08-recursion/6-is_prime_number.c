#include "main.h"
int prime(int n, int val);
/**
*is_prime_number - check the code
*@n:parameter
* Return: Always 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, 2));
}
/**
*prime - check the code
*@n:parameter
*@val:parameter
* Return: Always 0.
*/
int prime(int n, int val)
{
if (n == val)
return (1);
else if (n % val == 0)
return (0);
return (prime(n, val + 1));
}


