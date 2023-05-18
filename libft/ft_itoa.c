/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:44:23 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/16 23:20:02 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert_int(int len, int save_n)
{
	char	*num;

	num = malloc(sizeof(char) * (len + 1));
	if (num == NULL)
		return (NULL);
	num[len--] = '\0';
	if (save_n < 0)
		num[0] = '-';
	while (save_n != 0)
	{
		if (save_n % 10 < 0)
			num[len--] = -(save_n % 10) + '0';
		else
			num[len--] = (save_n % 10) + '0';
		save_n /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		len;
	int		save_n;

	save_n = n;
	len = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (ft_convert_int(len, save_n));
}
