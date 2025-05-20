#include <stdio.h>

int	ft_count(const char *c);

char	*strrchr(const char *s, int c)
{
	int	size;

	size = ft_count(s);
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)&s[size]);
		size--;
	}

	return (NULL);
}

int	ft_count(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}