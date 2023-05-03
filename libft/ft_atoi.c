/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:37:28 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/03 11:46:14 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *str)
{
	int	i;
	int	sum;
	int	negative;

	i = 0;
	sum = 0;
	negative = 1;
	if (str[i++] == '-')
		negative = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	if (negative != 1)
		sum *= negative;
	return (sum);
}
