int ft_isalnum(int c)
{
	if (c <= 57 && c >= 48 
	|| c <= 90 && c >= 65 
	|| c >= 97 && c <= 122)
		return 1;
	else return 0;
}