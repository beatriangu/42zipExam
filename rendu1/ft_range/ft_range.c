#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*range;
	long		i;
	long 	len;

	if (start > end)
		{
		len = (long)start -(long)end;
		range = (int *)malloc(sizeof(int) * (len + 1));
		}
	else
		{
			len = (long)end -(long)start;
			range = (int *)malloc(sizeof(int) * (len + 1));
		}
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

/*#include <stdio.h>
int main(void)
{
	int *ptr;

	ptr = ft_range(1,3);
		printf("%d\n", ptr[0]);
		printf("%d\n", ptr[1]);
		printf("%d\n", ptr[2]);
	return (0);
}*/