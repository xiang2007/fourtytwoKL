//n! = n * (n-1) * (n-2)... 3 + 2 + 1
int ft_factorial(int    n)
{
    while (n > 1)
    {
        return (n * ft_factorial(n - 1));
    }
}

# include <stdio.h>
int main()
{
    printf("%d",ft_factorial(5));
}