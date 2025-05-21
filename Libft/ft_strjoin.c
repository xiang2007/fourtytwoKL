#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_count(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int	size;
	char	*dest;

	i = 0;
	j = 0;
	size = (ft_count(s1) + ft_count(s2));
	dest = (char *)malloc(sizeof(char) * (size + 1));
	while (i + j < size)
	{
		while (s1[i])
			dest[i++] = s1[i];
		while (s2[j])
			dest[i + j++] = s2[j];
	}
	dest[size] = '\0';
	if (dest == NULL)
		return (NULL);
	return dest;
}

int    ft_count(const char *str)
{
	int    i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

