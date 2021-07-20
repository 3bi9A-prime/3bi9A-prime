int	to_lower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch);
	else if (ch >= 65 && ch <= 90)
		 ch += 32;
	return ch;
}
