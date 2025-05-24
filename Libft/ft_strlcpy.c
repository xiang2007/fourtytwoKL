<<<<<<< HEAD:libft/srcs/ft_strlcpy.c
size_t strlcpy(char *dst, const char *src, size_t dstsize);
=======
#include <stddef.h>
#include <stdio.h>

int ft_count(char *c);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t s;

	i = 0;
	s = ft_count((char *)src);
	if (size == 0)
		return (s);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';	

	return (s);
}

int ft_count(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
>>>>>>> 1e81dbcb3d717a019a609a006ef65a2027849e0f:Libft/ft_strlcpy.c
