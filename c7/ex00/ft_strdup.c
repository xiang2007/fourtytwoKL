char	*ft_strdup(char *src)
{
	int	i;
	int	j;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char)* i);
	j = 0;
	while (j < i)
	{
		dest[j] == src[i];
		j++;
		i++;
	}
	return(&dest);
}
