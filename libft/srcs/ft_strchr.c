#include <stddef.h>

char	*ft_strchr(const char *str, int search_str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search_str)
			return ((char *)&str[i]);
		i++;
	}
	if (search_str == '\0')
		return (char *)&str[i];
	return (NULL);
}