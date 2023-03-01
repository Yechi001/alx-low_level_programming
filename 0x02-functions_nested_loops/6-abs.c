#include "main.h"

/**
* _abs - function that computes absolute value
*
*@a: parameter to be checked
*Return: always n
*/

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
