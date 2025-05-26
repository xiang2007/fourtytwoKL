#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t i;
	char *d;
	const char *s;
	const char *d;

	i = ft_strlen(src);
	while (s[i] && d[i] && i < num)
	{
		*(tmp + (char)i) = s[i];
		i++;
	}
	i = 0;
}

#include <stdio.h>
int	main()
{
	char src[10] = "HelloWorld";
	size_t num = 5;
	printf("%p\n",ft_memmove(src,&src[2],num));
}