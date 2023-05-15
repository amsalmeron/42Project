/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:59:02 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/15 14:16:07 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*stack;

	i = 0;
	stack = (char *)haystack;
	if (!*needle)
		return (stack);
	while (stack[i] && i < len)
	{
		j = 0;
		while (needle[j] && stack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == 0)
			return (&stack[i]);
		i++;
	}
	return (0);
}
