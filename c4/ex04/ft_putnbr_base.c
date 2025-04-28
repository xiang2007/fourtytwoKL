#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int    ft_check(char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if ((base[i] == '+') || (base[i] == '-'))
            return (0);
        i++;
    }
    return (1);
}

int ft_check_dup(int nbr, char *base)
{
    int i;
    int j;
    int sign;
    char temp;

    j = 0;
    sign = 1;
    while (j < nbr)
    {
        i = 0;
        while (base[i])
        {
            temp = base[j];
            if (base[i + j + 1] == temp)
                sign--;
            i++;    
        }
        j++;
    }
    return (sign);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int len;
    int sign;
    int dup;

    len = ft_strlen(base);
    sign = ft_check(base);
    dup = ft_check_dup(len, base);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if (sign == 1 && dup == 1 && len > 1)
    {
        if (nbr >= len)
        {
            ft_putnbr_base(nbr / len, base);
        }
        ft_putchar(base[nbr % len]);
    }
}

int main()
{
    ft_putnbr_base(100,"01");
}