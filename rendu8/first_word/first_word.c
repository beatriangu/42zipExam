#include <unistd.h>

/*int ft_isspace(int i)
{
	return(( i == ' ') || (i > 8 && i < 14));
}

int main ( int ac, char **av)
{
	if (ac == 2)
	{
	while(*av[1] && ft_isspace(*av[1]))
		av[1]++;
	while(*av[1] && !ft_isspace(*av[1]))
		write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return(0);
}*/

int ft_isspace(int i)
{
	return(( i == 32) || (i > 8 && i < 14));
}

int main ( int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
	while(av[1][i] && ft_isspace(av[1][i]))
		i++;
	while(av[1][i] && !ft_isspace(av[1][i]))
		write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return(0);
}
