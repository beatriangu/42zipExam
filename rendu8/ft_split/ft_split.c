#include <stdlib.h>

int ft_isspace(int i)
{
	return(i == ' ' || (i > 8 && i < 14));
}

char    **ft_split(char *str)
{
	int i;
	int j;
	int k;
	
	char **split;

	i = 0;
	k = 0;
	if(!(split = (char**)malloc(sizeof(char*)*256)))
		return(NULL);
		while (ft_isspace(str[i]))
			i++;
		while(str[i])
		{
		j= 0;
	if(!(split[k] = (char*)malloc(sizeof(char)*4096)))
			return(NULL);
		while ( !ft_isspace(str[i]))
		split[k][j++] = str[i++];
		while(ft_isspace(str[i]))
		i++;
		split[k][j] = '\0';
		k++;
		}
		split[k] = NULL;
		return(split);
}

#include <stdio.h>

int main(void)
{
	char **split;

	split = ft_split("lola lolo lelo");
	printf ("Split ; %s\n", split[0]);
	printf ("Split ; %s\n", split[1]);
	printf ("Split ; %s\n", split[2]);
	return(0);
}