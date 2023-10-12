#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times, followed by a new line
 */
void more_numbers(void)
{
int i, digit;

for (i = 0; i < 10; i++) /* Print the sequence ten times */
{
for (digit = 0; digit <= 14; digit++)
{
if (digit >= 10) /* For two-digit numbers, print the tens digit */
_putchar('0' + digit / 10);

_putchar('0' + digit % 10); /* Print the units digit */
}
_putchar('\n'); /* New line after each sequence */
}
}
