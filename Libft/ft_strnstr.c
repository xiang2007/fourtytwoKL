#include <stddef.h>

char	*ft_strnstr(const char *find, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (*to_find == '\0')
		return ((char *)find);
	i = 0;
	while (find[i] && i < len)
	{
		j = 0;
		while (to_find[j] && find[i + j] == to_find[j] && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(find + j));
		i++;
	}

	return (NULL);
}