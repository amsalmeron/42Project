/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:28:21 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 15:41:28 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hex(unsigned long num)
{
	int				count;
	int				digit_count;
	unsigned long	temp;

	count = 0;
	digit_count = 0;
	temp = num;
	while (temp > 0)
	{
		temp /= 16;
		digit_count++;
	}
	if (num == 0)
		count = write(1, "0", 1);
	else
		count += ft_print_hex(num, digit_count, count);
	return (count);
}
