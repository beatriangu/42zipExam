#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *rrange;
	long i ;
	long len;

	rrange = 0;	
	if(start > end)
	{
		len = (long) start- (long)end;
		if(!(rrange = (int*)malloc(sizeof(int) *len+1)))
		return (NULL);
	}
	else
	{
		len = (long) end- (long)start;
		if(!(rrange = (int*)malloc(sizeof(int) *len+1)))
		return(NULL);
	}
	i = 0;
	while(start != end)
	{
		rrange[i++] = end;
		end += (end > start)? -1 : 1;
	}
	rrange [i] = '\0';
	i++;
	rrange[i] = end;
	return (rrange); 
	}

/*#include <stdio.h>
int main (void)
{
	int *ptr;

	ptr = ft_rrange (1,3);
	printf( "%d\n", ptr[0]);
	printf( "%d\n", ptr[1]);
	printf( "%d\n", ptr[2]);
	printf( "%d\n", ptr[3]);
return (0);
}*/