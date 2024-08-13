
void ft_rev_print(char *str)
{
	int i = 0;
	
	while(str[i])
		i++;
	while(i)
		write(1, &str[--i], 1);
}


