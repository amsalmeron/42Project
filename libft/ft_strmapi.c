/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:32:16 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/15 13:34:38 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmap;
	int		length;
	int		i;

	length = ft_strlen(s);
	strmap = (char *)malloc(sizeof(char) * (length + 1));
	i = 0;
	if (!strmap)
		return (NULL);
	while (s[i])
	{
		strmap[i] = f(i, s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}
