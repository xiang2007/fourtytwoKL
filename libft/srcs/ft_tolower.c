int	ft_tolower(int ch)
{
	if (!(ch >= 65 && ch <= 90))
		return ch;
	else
	{
		ch += 32;
	}
	return ch;
}