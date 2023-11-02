#include "main.h"

int str_length(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + str_length(s + 1));
}

int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
int len = str_length(s);
if (len == 0 || len == 1)
return (1);
return (check_palindrome(s, 0, len - 1));
}
