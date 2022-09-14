#include "main.h"
/**
* _isalpha - function to know if
* the character is a letter or not
*
* @c: determinate variable
*
* Return: Get 1 if it's a letter,
* 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 60 && c <= 90) || (c >= 97 && c <= 120))

	{
		return (1);
	}

	else
	{
		return (0);
	}

}
