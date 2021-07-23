char *strchr(char *str, char c)
{
       	while (str[i] != '\0') 
	{
	       	if (str[i] == c)
		return (&str[i]);
	       	i++;
       	}
	return (NULL);
}

