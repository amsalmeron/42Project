/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:09:50 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/15 14:51:25 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	*str;

	str = (char *)s;
	length = ft_strlen(str);
	if (c == '\0')
		return (str + length);
	while (length > 0)
	{
		length--;
		if (str[length] == c)
			return (str + length);
	}
	if (c == '\0')
        return (str + length);
	return (NULL);
}
