/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:31:27 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 16:54:39 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		total;

	va_start(ap, format);
	count = 0;
	total = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count = ft_printf_arg(*(++format), ap);
		else
			count = write(1, format, 1);
		if (count == -1)
		{
			va_end(ap);
			return (-1);
		}
		else
			total += count;
		++format;
	}
	va_end(ap);
	return (total);
}
/*
#include <limits.h>
int	main(void)
{
	int count;

	// String
	ft_printf("String\n");
	count = ft_printf("Hello, %s\n", NULL);
	ft_printf("Test count: %d\n", count);
	count = printf("Hello, %s\n", NULL);
	printf("Actual count: %d\n", count);

	// Pointer
	ft_printf("Pointer\n");
	count = ft_printf("Hello, %p\n", 0);
	ft_printf("Test count: %d\n", count);
	count = printf("Hello, %p\n", 0);
	printf("Actual count: %d\n", count);

	// Dceimal
	// Integer
	// Unsigned Decimal
	ft_printf("Unsigned\n");
	count = ft_printf("Hello, %u\n", ULONG_MAX);
	ft_printf("Test count: %d\n", count);
	count = printf("Hello, %u\n", ULONG_MAX);
	printf("Actual count: %d\n", count);	
	// Hexadecimal
	// Percent

	return (0);
}
*/
