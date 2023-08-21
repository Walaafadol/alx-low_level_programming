#include "main.h"
/**
* rev_string - check the code
*@s:  pointer
* Return: Always 0.
*/
void rev_string(char *s)
{
int i;
char rev = s[0];
int counter = 0;
for (i = 0; s[counter] != '\0'; counter++)
	;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
