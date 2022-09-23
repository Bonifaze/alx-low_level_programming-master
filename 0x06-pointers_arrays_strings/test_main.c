#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    printf("Comparing \"%s\" and \"%s\" gives %d\n", "Sweet", "Sweat",
		    _strcmp("Sweet", "Sweat"));
    printf("Comparing \"%s\" and \"%s\" gives %d\n", "MAN", "MANE",
		    _strcmp("MAN", "MANE"));
    printf("Comparing \"%s\" and \"%s\" gives %d\n", "Cake", "Cake",
		    _strcmp("Cake", "Cake"));
    return (0);
}
