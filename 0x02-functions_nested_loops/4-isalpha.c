#include "main.h"
/**
 * _isalpha - fuction to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for argument of the function
 * author: Dr-savantcode
 * Return: 0 success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
