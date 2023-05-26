/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:28:43 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 15:29:02 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, int digit_count, int count)
{
	int		shift;
	int		digit;
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	while (digit_count > 0)
	{
		shift = (digit_count - 1) * 4;
		digit = (num >> shift) & 0xf;
		c = hex[digit];
		count += write(1, &c, 1);
		digit_count--;
	}
	return (count);
}
