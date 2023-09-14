#include "variadic_functions.h"
/**
*print_numbers - program
*Return:0
*@separator:parameter
*@n:argument
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int i = n;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "")  : "\n");
va_end(ap);
}
