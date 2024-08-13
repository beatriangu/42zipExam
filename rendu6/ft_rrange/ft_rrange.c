#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *rrange;
	long i;
	long len;

	if ( start > end)
	{
		len = (long)start - (long)end;
		if(!(rrange = (int*)malloc(sizeof(int)* len+1)))
		return ( NULL);
	}
	else
	{
		len = (long)end - (long)start;
		if(!(rrange = (int*)malloc(sizeof(int)* len+1)))
		return ( NULL);
	}
	i = 0;
	while ( start != end)
	{
		rrange[i++] = end;
		end += (end > start)? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}


