/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:37:28 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/16 23:07:48 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checksign(const char c, int *i)
{
	int	sign;

	sign = 1;
	if (c == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (c == '+')
		(*i)++;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sum;
	int	sign;
	int	digit;

	i = 0;
	sum = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	sign = ft_checksign(str[i], &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (sum > INT_MAX / 10 || \
			(sum == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == -1)
				return (INT_MIN);
			else
				return (INT_MAX);
		}
		sum = sum * 10 + digit;
		i++;
	}
	return (sum * sign);
}
