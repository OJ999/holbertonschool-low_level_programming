#include <unistd.h>

void _putchar(char c)
{
write(1, &c, 1);
}
void print_fizz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
void print_buzz(void)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
void print_fizzbuzz(void)
{
print_fizz();
print_buzz();
}
void print_number(int n)
{
if (n < 10)
_putchar(n + '0');
else
{
print_number(n / 10);
_putchar(n % 10 + '0');
}
}
void print_space(void)
{
_putchar(' ');
}
void print_new_line(void)
{
_putchar('\n');
}
