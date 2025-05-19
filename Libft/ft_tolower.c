int	ft_toupper(int ch)
{
	if(ch >= 'A' && ch <= 'Z')
		ch += 32;
	return ch;
}