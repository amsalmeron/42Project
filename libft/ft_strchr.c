/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:52:11 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/03 14:02:52 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	length;
	size_t	i;
	char	*str;

	i = 0;
	length = ft_strlen(s);
	str = (char *)s;
	while (i <= length)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
