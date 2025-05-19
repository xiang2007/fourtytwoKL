#include <stdio.h>

char	*ft_chrstr(const char *src, int	c)
{
	int	i;

	i = 0;
	if (src == NULL)
		return NULL;
	while (src[i])
	{
		if (src[i] == (char)c)
			return (char *)&src[i];
		i++;
	}
	if ((char)c == '\0')
		return (char *)&src[i];
	return NULL;
}