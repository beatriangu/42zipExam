#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int i;
	int sign;
	int temp;
	char *itoa;
	
	i = 0;
	itoa = malloc(12);
	itoa[11] = '\0';
	if ( nbr == 0)
	{
		itoa[10] = '0';
		return( &itoa[10]);
	}
	if(nbr == -2147483648)
	return("-2147483648");
	sign = 0;
	temp = nbr;
	if ( i < 0)
	{
	sign = 1;
	temp = nbr * (-1);
	}
	i = 10;
	while(temp)
	{
	itoa[i] = temp%10 + '0';
	temp = temp/10;
	i--;
	}
	if (sign ==  1)
	{
	itoa[i] = '-';
	i--;
	}
	return(&itoa[i+1]);
}
