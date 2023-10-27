#include "main.h"

int _atoi(char *s) /* Intro */
{
int result = 0; /* Initialize the result */
int sign = 1;   /* Initialize the sign as positive (default) */
int foundDigit = 0; /* Flag to check if at least one digit is found */

/* Parse the string to convert it to an integer */
while (*s)
{
if (*s == '-' || *s == '+')
{
/* Check for mul signs, stop parsing more than one sign encountered */
if (foundDigit)
{
break;
}
if (*s == '-')
{
sign *= -1; /* If '-', change the sign to negative */
}
}
else if (*s >= '0' && *s <= '9')
{
int digit = *s - '0'; /* Convert character to integer */
/* Check for integer overflow */
if (result > (INT_MAX - digit) / 10)
{
/* Handle overflow (you can choose your preferred behavior) */
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}
result = result * 10 + digit;
foundDigit = 1; /* Set the flag to indicate at least one digit found */
}
else if (foundDigit)
{
/* Stop parsing non-digit character encountered after one digit */
break;
}
s++; /* Move to the next character */
}

/* Apply the sign to the result */
return (result *sign);
}
