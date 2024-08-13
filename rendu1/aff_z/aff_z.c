#include <unistd.h>

int main(void)
{
	write (1, "z\n", 1);
	return(0);
}