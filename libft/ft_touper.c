int ft_toupper(int ch)
{
	if (ch <= 90 && ch >= 65)
		return ch;
	else if ( ch <= 122 && ch >= 97 )
		ch -= 32;
	return ch;
}
