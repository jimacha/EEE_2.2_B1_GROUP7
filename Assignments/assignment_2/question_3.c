#include <stdio.h>

/**
 * main - a program that prints all the alphabets in lowercase except q and e
 *
 * return: always 0 success
 */

int main(void)
{
	char al = 'a';

	for(al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
