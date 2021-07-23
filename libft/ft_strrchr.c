char *ft_strrchr(char *str, char c)
{
	int i = 0
	while (str[i] != '\0')
		i++;
	i -= 1;
	while (i != 0)
	{	
		if( str[i] ==c)
			return(&str[i]);
		i--;
	}
	return (0);
}
