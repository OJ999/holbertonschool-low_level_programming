#include "main.h"

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
print_fizzbuzz();
else if (i % 3 == 0)
print_fizz();
else if (i % 5 == 0)
print_buzz();
else
print_number(i);
if (i < 100)
print_space();
else
print_new_line();
}
return (0);
}
