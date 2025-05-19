#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 11) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
				sign *= -1;
				i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}

	return result * sign;

}

int	main()
{
	printf("%d\n",ft_atoi("-12A345"));
}