int	ft_isalnum(int num)
{
	if ((num >= '0' && num <= '9') || (num >= 'A' && num <= 'Z') ||
		(num >= 'a' && num <= 'z'))
		return (1);
	else
		return (0);
}