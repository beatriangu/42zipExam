#include <unistd.h>

int main (void)
{
	int i =1;

	while (i <= 100)
	{
	if(i%28 == 0)
		write(1, "buzzfizz", 8);
	else if( i%4 == 0)
		write(1, "buzz", 4);
	else if(i%7 ==0)
		write(1, "fizz", 4);
	else
	{
		if(i >= 10)
			write(1, &"0123456789"[i/10], 1);
			write(1, &"0123456789"[i%10], 1);
		
	}
	i++;
	write(1,"\n", 1);
	}
	return(0);
}