#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int i;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Calculate the starting index for printing the second half */
i = (length + 1) / 2;

/* Print the second half of the string */
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');  /* Print a newline character */
}
