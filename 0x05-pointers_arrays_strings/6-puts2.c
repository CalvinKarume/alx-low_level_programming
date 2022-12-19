#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @s: input string
 * Return: string in reverse
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; 0 <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
