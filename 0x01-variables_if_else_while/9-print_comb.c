#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main()
{
    int num;

    for (num = 48; num < 58; num++)
    putchar(num);
    if (num != 57)
    {
        putchar(',');
	putchar('num ');
    }
    putchar('\n');
    return (0);
}