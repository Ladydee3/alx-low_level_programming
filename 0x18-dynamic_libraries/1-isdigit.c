#include "main.h"

/**
 * _isdigit - Check if character is digit
 * @x: The number to be checked
 * Return: 1 for character that will be digit or 0 something else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
