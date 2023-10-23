int main()
{
int num = 42;
int *ptr = &num;

reset_to_98(ptr);

// Now, the value of num will be 98
return 0;
}
