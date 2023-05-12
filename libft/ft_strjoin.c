#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *joined;
	int length = ft_strlen(s1) + ft_strlen(s2) + 1;
	int i = 0;

	joined = malloc(sizeof(char) * length);
	if (joined == NULL)
		return (NULL);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		joined[i] = s2[i];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
