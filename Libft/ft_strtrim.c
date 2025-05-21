#include <stdlib.h>
#include <stddef.h>

void    ft_count(const char *str, const char c, int *min, int *max);

char    *ft_strtrim(const char *s1, const char set)
{
	size_t    i;
	int        min;
	int        max;
	int size;
	char    *dest;

	min = 0;
	max = 0;
	i = 0;
	ft_count(s1,set,&min,&max);
	size = (max - min + 1);
	dest = (char *)malloc(sizeof(char) * (max - min + 2));
	while (i < size)
		dest[i++] = s1[min++]; 
	dest[i] = '\0';
	return (dest);
}

void    ft_count(const char *str, const char c, int *min, int *max)
{
	int    i;
	int size;

	i = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && *min == 0)
			*min = i;
		else if (str[i + 1] == c)
			*max = i++;
		else
			i++;
	}
}

#include <stdio.h>
int    main()
{
	int    min;
	int    max;
	char    *dest;

	min = 0;
	max = 0;
	const char    str[20] = "   Hello World   ";
	dest = ft_strtrim(str,' ');
	printf("%s\n",dest);
}