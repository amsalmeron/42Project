/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:11:02 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/03 13:43:39 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s1);
	s2 = malloc(sizeof(char) * length + 1);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i + 1] = '\0';
	return (s2);
}
