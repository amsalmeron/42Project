/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:01:29 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 17:58:46 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_write_int(long d, int base, char type, char *hex)
{
	int	count;
	int	total;

	count = 0;
	total = 0;
	if (d < 0)
	{
		count = ft_print_char('-');
		if (count == -1)
			return (count);
		return (ft_write_int(-d, base, type, hex) + 1);
	}
	else if (d < base)
		return (ft_print_char(hex[d]));
	else
	{
		count = ft_write_int(d / base, base, type, hex);
		if (count == -1)
			return (count);
		total += count;
		return (total + ft_write_int(d % base, base, type, hex));
	}
}

int	ft_print_int(long d, int base, char type)
{
	int		count;
	char	*hex;

	if (type == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	count = ft_write_int(d, base, type, hex);
	return (count);
}
