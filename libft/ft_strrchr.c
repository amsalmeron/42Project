/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:09:50 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/16 23:34:07 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str_end;

	str_end = (char *)s + ft_strlen(s);
	while (str_end > s && *str_end != (char)c)
		str_end--;
	if (*str_end == (char)c)
		return (str_end);
	return (NULL);
}
