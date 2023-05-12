#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub = malloc(sizeof(char) * len);
	if (sub == NULL)
		return (NULL);
	size_t i;

	i = 0;
	while (s[start] && i < len)
		sub[i++] = s[start++];
	while (i < len)
		sub[i++] = '\0';
	return (sub);
}
