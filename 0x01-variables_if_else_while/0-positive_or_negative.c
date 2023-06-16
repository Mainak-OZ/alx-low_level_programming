#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 * /

int main(void)
{
	int n;

    srand(time(NULL));
    n = rand() % 201 - 100;  // Random number between -100 and 100

     if (n > 0) {
        printf("The number %d is positive.\n", n);
    } else if (n < 0) {
        printf("The number %d is negative.\n", n);
    } else {
        printf("The number is zero.\n");
    }

    return (0);
}
