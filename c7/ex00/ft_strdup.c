#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	(void)argc;
	char *copy;

	copy = ft_strdup(argv[1]);
	ft_putstr(copy);
	free(copy);

	return (0);
}

char *ft_strdup(char *src)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(src);
	char *dest = (char *)malloc(sizeof(char) * i + 1);

	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	
	return (dest);
}

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}