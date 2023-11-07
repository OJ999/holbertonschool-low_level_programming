#include <stdlib.h>
#include "main.h"  /* Ensure to include the header file with prototypes */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98); /* Terminate the process with status 98 if malloc fails */
}

return (ptr);
}
