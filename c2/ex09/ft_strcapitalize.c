#include <unistd.h>

void	ft_strcapitalize(char *string);

void	ft_putstr(char *str)
{
	int	i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_strcapitalize(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		else if (!(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			sign = 0;
		}
		else if(sign == 0)
		{
			sign = 1;
			str[i] -= 32;
		}
		i++;
	}
	ft_putstr(str);
}

int	main()
{
	char c[] = "SSalut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);
}
