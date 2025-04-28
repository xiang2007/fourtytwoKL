#include <stdio.h>

//prime number can only be divided by 1 or its own number

int ft_check(int nbr)
{
    if (nbr < 0)
        nbr *= -1;
    if (nbr == 0 || nbr == 1 || nbr == 2147483648)
        return (0);
    if (nbr == 2 || nbr == 3)
        return (1);
    if (nbr == 2147483647)
        return (1);
    return (nbr);

}

int ft_is_prime(int nbr)
{
    int temp;
    int sign;
    int n;
    int count;

    sign = 1;
    count = 1;
    n = ft_check(nbr);
    if (n == 1)
        return (1);
    if (n == 0)
        return (0);
    while ((nbr / 4 > count))
    {
        temp = 6 * (count) + sign;
        sign *= -1;
           if (nbr == temp)
                return (1);
            count++;
            printf("%d\n", temp);
    }
    return (0);
}
int main()
{
    printf("%d\n", ft_is_prime(2147483647)); // Should print 1 (prime)
	printf("%d\n", ft_is_prime(-11));        // Should print 0 (not prime)
	printf("%d\n", ft_is_prime(37));         // Should print 1
}