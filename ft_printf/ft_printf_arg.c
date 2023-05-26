/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:52:30 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/24 17:35:18 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_print_char(va_arg(ap, int));
	else if (type == 's')
		count = ft_print_str(va_arg(ap, char *));
	else if (type == 'p')
		count = ft_print_ptr(va_arg(ap, void *));
	else if (type == 'd' || type == 'i')
		count = ft_print_int((long)va_arg(ap, int), 10, type);
	else if (type == 'u')
		count = ft_print_unsigned((unsigned long)va_arg(ap, long));
	else if (type == 'x' || type == 'X')
		count = ft_print_int((long)va_arg(ap, unsigned int), 16, type);
	else
		count = write(1, &type, 1);
	return (count);
}
