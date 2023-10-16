#include "main.h"
#include <stddef.h>  /* Include the <stddef.h> header for NULL */

/**
 * reset_to_98 - Takes a pointer to an int and updates the value to 98.
 * @n: Pointer to the integer to be updated.
 */
void reset_to_98(int *n)
{
if (n != NULL)
*n = 98;
}

