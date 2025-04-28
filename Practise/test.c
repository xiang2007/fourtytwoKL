#include <stdio.h>

int plus(int a, int b)
{
    int count;
    count = a + b;
    return (count);
}

int main()
{
    printf("%d\n",plus(1,9));
    return (0);
}