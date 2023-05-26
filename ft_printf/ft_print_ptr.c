/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:21:38 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 17:24:56 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count;
	int	total;

	total = 0;
	count = write(1, "0x", 2);
	if (count == -1)
		return (-1);
	total += count;
	count = ft_ptr_hex((unsigned long) ptr);
	if (count == -1)
		return (-1);
	total += count;
	return (total);
}
