#include "variadic_functions.h"
/**
*sum_them_all - program
*Return:0
*@n:parameter
*@...:argument
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i = n, s = 0;
if (!n)
return (0);
va_start(ap, n);
while (i--)
s += va_arg(ap, int);
va_end(ap);
return (s);
}
