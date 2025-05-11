#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);
int	ft_atoi(char *nbr);
void	ft_putnbr(int *nbr);

int	main(int argc, char **argv)
{
	int min;
	int max;

	if (argc < 2)
	{
		printf("%s","Arguments missing.");
	}

	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	ft_range(min,max);
}

int	ft_atoi(char *nbr)
{
	int m;

	m = nbr[0] - '0';

	return (m);
}

int	*ft_range(int min, int max)
{
	int i;

	i = 0;
	int *nbr = (int *)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		nbr[i] = min;
		i++;
		min++;
	}
	nbr[i] = '\0';
	ft_putnbr(nbr);
}

void	ft_putnbr(int *nbr)
{
	char c;
	int i;

	i = 0;
	while(nbr[i])
	{
		c = nbr[i] + '0';
		write(1, &c, 1);
		i++;
	}
}