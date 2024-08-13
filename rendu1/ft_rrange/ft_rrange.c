#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	long		i;
	long 	len;

	if (start > end)
		{
		len = (long)start -(long)end;
		rrange = (int *)malloc(sizeof(int) * (len + 1));
		}
	else
		{
			len = (long)end -(long)start;
			rrange = (int *)malloc(sizeof(int) * (len + 1));
		}
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end += (end > start) ? -1 : 1;
	}
	rrange[i] = start;
	return (rrange);
}

/*#include <stdio.h>
int main(void)
{
	int *ptr;

	ptr = ft_rrange(-2147483648,2147483647);
		printf("%d\n", ptr[0]);
		printf("%d\n", ptr[1]);
		printf("%d\n", ptr[2]);
	return (0);
}*/
