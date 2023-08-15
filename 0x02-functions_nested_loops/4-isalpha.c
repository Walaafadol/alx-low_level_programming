#include "main.h"

/**
 * _isalpha - check the code.
 * Return:1 if c is lowercase
 * @c:  is parameter
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
if (c != 91 && c != 92 && c != 93 && c != 94 && c != 95 && c != 96)
{
return (1);
}
}
return (0);
}
