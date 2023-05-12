#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimed;
	char test;
	int size;
	int i;
	
	trimed = "test";
	test = set[0];
	size = 2;
	i = 0;

	while (s1[i] && i < size)
	{
		i++;
	}

	return (trimed);
}
