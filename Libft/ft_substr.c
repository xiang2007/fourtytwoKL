#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_count(char const *str);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	int    size;
	char    *dest;

	i = 0;
	size = ft_count(s);
	if (start == size)
		return (malloc(1));
	if (start > size)
		return ;
}

int    ft_count(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int    main()
{
	printf("%s\n",ft_substr(NULL, 0, 5));        // ""     (empty input string)

}