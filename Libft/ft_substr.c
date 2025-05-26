#include "libft.h" 

static size_t	ft_count(char *str);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;
	char	*src;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_count((char *)s);
	if (start + len > size)
		start = size - len;
	while (i <= len)
		{
			dest[i] = s[start + i];
			i++;
		}
	dest[i] = '\0';
	return ((char *)dest);
}

static size_t	ft_count(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main()
{
	printf("%s\n",ft_substr("a",10,4));
}