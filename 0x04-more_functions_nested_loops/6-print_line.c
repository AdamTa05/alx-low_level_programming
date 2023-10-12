#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 */
void print_line(int n)
{
    if (n <= 0) /* If n is 0 or less, print just a newline */
    {
        _putchar('\n');
    }
    else
    {
        while (n > 0) /* Print the character '_' 'n' times */
        {
            _putchar('_');
            n--;
        }
        _putchar('\n'); /* End the line with a newline character */
    }
}

