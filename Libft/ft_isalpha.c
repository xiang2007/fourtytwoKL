int ft_isalpha(int alpha)
{
	if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
		return (1);
	else
		return (0);
}