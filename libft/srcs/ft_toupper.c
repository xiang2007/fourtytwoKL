int	ft_toupper(int ch)
{
	if (!(ch >= 97 && ch <= 122))
		return ch;
	else
	{
		ch -= 32;
	}
	return ch;
}