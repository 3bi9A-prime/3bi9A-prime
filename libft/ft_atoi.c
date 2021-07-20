int ft_atoi(char *str)
{
	int i = 0;
	int c = 0;
	int count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 )
		i++;
	while (str[i] == 45 || str[i] == 43)
	{	if (str[i] == 45)
		count++;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		c = str[i] - 48 + (c * 10);
		i++;
	}
	if ((count % 2) != 0)
		c *= -1 ;
	return c;
}
