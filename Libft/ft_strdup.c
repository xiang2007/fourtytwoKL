#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>  

int	ft_count(const char *c);

char	*ft_strdup(const char *str)

{
	char	*dst;
	int	len;
	int	i;
	
	i = 0;
	len = ft_count(str);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[len] = '\0';

	return dst;
}

int	ft_count(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return i;
}