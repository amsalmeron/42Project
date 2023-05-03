/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:07 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/03 13:48:08 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	char *d;
	const char *s;

	i = 0;
	d = dest;
	s = src;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
