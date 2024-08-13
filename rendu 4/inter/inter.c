#include <unistd.h>

int scan ( char *str, char c, int end)
{
	int k;
	
	k = 0;
	while ( str[k] && k < end)
	{
		if(str[k] == c)
		return(1);
		k++;
	}
	return(0);
}

int main( int ac, char ** av)
{
	int i;
	int j;
	if ( ac == 3 )
	{
	i = 0;
	while ( av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if( av[1][i] == av[2][j] && !scan ( av[1], av[1][i], i))
			{
			write (1, &av[1][i], 1);
			break;
		}
		j++;
	}
	i++;
	}
	}
write(1, "\n", 1);
return(0);
}