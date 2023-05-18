/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:53:38 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/18 11:56:22 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

void	ft_free(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
}

static char	**ft_populate_split(char const *s, char c, char **str_arr, int i)
{
	size_t	world_len;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				world_len = ft_strlen(s);
			else
				world_len = ft_strchr(s, c) - s;
			str_arr[i] = ft_substr(s, 0, world_len);
			if (str_arr[i] == NULL)
			{
				ft_free(str_arr, i);
				return (NULL);
			}
			i++;
			s += world_len;
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str_arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str_arr)
		return (NULL);
	str_arr = ft_populate_split(s, c, str_arr, i);
	return (str_arr);
}
