#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi(char *str);

int ft_isalnum(int c);

int ft_isalpha(int c);

int ft_isascii(int a);

int if_digit(int a);

int ft_isprint(int arg);

char *strchr(char *str, char c);

int ft_strcmp(char *s1, char* s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strrchr(char *str, char c);

char *ft_strstr(char *src, char *to_find);

int	to_lower(int ch);

int ft_toupper(int ch);

#endif
