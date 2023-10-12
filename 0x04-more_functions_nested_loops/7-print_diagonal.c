#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int spaces; /* Variable to track the number of spaces */

if (n <= 0) /* If n is 0 or less, print just a newline */
{
_putchar('\n');
}
else
{
for (; n > 0; n--)
{
for (spaces = 0; spaces < (n - 1); spaces++)
{
_putchar(' '); /* Print spaces before the '\' */
}
_putchar('\\'); /* Print the '\' */
_putchar('\n'); /* End the diagonal with a newline */
}
}
}
