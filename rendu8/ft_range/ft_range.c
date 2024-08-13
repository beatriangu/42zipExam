#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	long len;
	long i;

	if(start > end)
	{
	len = (long)start -(long)end;
	if(!(range = (int*)malloc(sizeof(int) * len+1)))
	return( NULL);
	}
	else
	{
	len = (long)end - (long)start;
	if(!(range = (int*)malloc(sizeof(int) * len+1)))
	return( NULL);
	}
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end)? -1 : 1;
	}
		range[i]= start;
		return(range);
}
