/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:59:42 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 16:57:18 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;
	int	total;

	count = 0;
	total = 0;
	if (str == NULL)
		total = write(1, "(null)", 6);
	else
	{
		while (*str != '\0')
		{
			count = ft_print_char((int) *str);
			if (count == -1)
				return (count);
			else
				total += count;
			str++;
		}
	}
	return (total);
}
