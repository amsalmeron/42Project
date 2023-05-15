/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:53:38 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/15 13:26:17 by asalmero         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	world_len;
	int		i;

	str_arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !str_arr)
		return (0);
	i = 0;
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
			str_arr[i++] = ft_substr(s, 0, world_len);
			s += world_len;
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}
