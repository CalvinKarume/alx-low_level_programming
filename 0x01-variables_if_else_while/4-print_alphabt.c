#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 */
int main(void)
{
	char c = 'a';

	while (c <= '2')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
