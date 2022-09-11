#include <stdio.h>
/**
* main - Describing the main function
*
* Return: End
*/
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; --n)
		putchar(n);

	putchar(10);
	return (0);
}
