#include "main.h"
#include <stddef.h> /* Include stddef.h to use NULL */

void reset_to_98(int *n)
{
if (n != NULL)
{
*n = 98;  /* Update the value pointed to by n to 98 */
}
}
