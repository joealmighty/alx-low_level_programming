#include "main.h"

/**
* _strcat - linking two strings
*
* @dest: string to adjoin to
* @src: string to be added
*
* Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
