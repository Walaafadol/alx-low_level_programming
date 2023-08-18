#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * void: first integer
 * Return: largest number
 */

int largest_number(void)
{
	int largest, a, b, c;

	if (a > b && b > c)
	{
	largest = a;
	}
	else if (b > a && a > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
