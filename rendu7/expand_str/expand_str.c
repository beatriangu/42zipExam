#include <unistd.h>

int ft_isspace(char c)
{
	return((c == ' ') || (c > 8 && c < 14));
}

void ft_expand_str ( char *s)
{
	int i ;
	
	i = 0;
	while (s[i] && ft_isspace(s[i]))
	i++;
	while(s[i])
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
			write ( 1, &s[i++],1);
			if(s[i])
				write(1, "   ", 3);		
	}
}

int main ( int ac, char **av)
{
	if (ac == 2)
	{
		ft_expand_str( av[1]);
	}
	write(1, "\n", 1);
	return(0);
}