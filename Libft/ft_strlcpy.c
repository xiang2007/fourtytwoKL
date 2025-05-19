#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (src = NULL)
		return size;
	dest[size - 1] = '\0';
	size--;
	while (size - 1)
	{
		dest[size - 1] = (char *)src[size - 1];
		size--;
	}
	if ()
}