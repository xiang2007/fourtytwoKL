int fib(int i)
{
    if (i == 0)
        return(0);
    if (i == 1)
        return (1);
    return (fib(i - 1) + fib (i - 2));
}

#include <stdio.h>
int main()
{
    int i;
    i = 1;

    while (i < 46)
    {
    printf("%d\n",fib(i));
    i++;
    }
}