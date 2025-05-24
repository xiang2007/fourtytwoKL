

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

	min = 0;
	max = 0;
	const char    str[20] = "###HELL   O###";
	ft_count(str,'#',&min,&max);
	printf("%d\n",min);
	printf("%d\n",max);
}