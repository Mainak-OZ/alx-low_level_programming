#include <stdio.h>

/**
 * main - numbers between 0 and 9 AND letters between a to f
 * Return: 0 (Success)
*/

int main()
{
        int i;

        for (i = 48; i < 58; i++)
        {
		putchar(i);
        }
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
        putchar('\n');
        return (0);
}
