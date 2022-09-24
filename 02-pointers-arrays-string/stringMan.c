#include "main.h"

/**
 * stringMan - manipulates strings in different ways
 *
 * @str: string to be manipulated
 */
void stringMan(char *str)
{
    int length = getStringLength(str);
    int i;

    printf("The length of the string is: %d\n", length);
    printf("String: %s\n", str);

    if (length == 1)
	printf("%s\n", str);
    else
    {
	for (i = length; i>=0; i--)
	_putchar(str[i]);
	_putchar('\n');
    }
}
