char *ft_strstr(char *src, char *to_find)
{
	int i = 0;
	int j = 0;
	while (src[i] && to_find[j])
	{
		if (src[i] == to_find[j])
			j++;
		else if (src[i-1] == to_find[j-1])
		{
			i = i-j;
			j = 0;
		}
	i++;
	}
	if (to_find[j] == '\0')
		return (&src[i - j]);
	return src;
}
