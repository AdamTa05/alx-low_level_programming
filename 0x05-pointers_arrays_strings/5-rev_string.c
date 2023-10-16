#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

end = length - 1;

while (start < end)
{
/* Swap characters at start and end */
char temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
