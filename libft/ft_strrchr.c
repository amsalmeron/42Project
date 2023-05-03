/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:09:50 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/03 14:04:32 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	length;
	char 	*str;

	str = (char *)s;
	length = ft_strlen(str) - 1;
	while (length >= 0)
	{
		if (str[length] == c)
			return (&str[length]);
		length--;
	}
	return (0);
}
