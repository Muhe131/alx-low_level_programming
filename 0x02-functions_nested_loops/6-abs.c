#include "main.h"


/**
 * _abs - entry point
 *
 * Description: function that computes the absolute value
 *  of an integer.
 *
 * @a:the integer to compute its absolute value
 *
 * Return: returns the abs value
 *
 */

int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = a;
	return (absvalue);
}

