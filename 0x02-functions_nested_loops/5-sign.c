#include "main.h"

/**
* print_sign - function that prints the sign of numbers
*
* @n: parameter to be checked
* Return: 1 if the number is greater than 0
*and 0 if the number is equal to 0
*and -1 if the number is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
