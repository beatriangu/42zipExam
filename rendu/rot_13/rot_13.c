#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
{
while (*av[1])
{
	if ((*av[1] >= 'A' && *av[1] <= 'M') || (*av[1] >= 'a' && *av[1] <= 'm'))
	*av[1] += 13;
	else if ((*av[1] >= 'N' && *av[1] <= 'Z') || (*av[1] >= 'n' && *av[1] <= 'z'))
	*av[1] -= 13;
	write(1, av[1]++, 1);
}
write(1, "\n", 1);
return(0);
}
}