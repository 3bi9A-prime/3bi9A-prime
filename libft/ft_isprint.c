int ft_isprint(int arg)
{
	if (arg <= 127  && arg >=32 )
		return (1);
	else 
		return 0;
}
