/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:35:32 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 17:53:04 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_write_unsigned(char *digits, int digit_count)
{
	int	i;
	int	count;
	int	total;

	i = 0;
	count = 0;
	total = 0;
	while (i < digit_count)
	{
		count = write(1, (digits + i++), 1);
		if (count == -1)
			return (-1);
		total += count;
	}
	return (total);
}

static int	ft_assign_unsigned(unsigned int num, int digit_count)
{
	int		count;
	int		i;
	char	*digits;

	count = 0;
	i = digit_count - 1;
	digits = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (digits == NULL)
		return (-1);
	while (i >= 0)
	{
		*(digits + i) = '0' + (num % 10);
		num /= 10;
		i--;
	}
	count = ft_write_unsigned(digits, digit_count);
	free(digits);
	return (count);
}

int	ft_print_unsigned(unsigned int num)
{
	int				digit_count;
	unsigned int	temp;

	digit_count = 0;
	temp = num;
	if (num == 0)
		return (write(1, "0", 1));
	while (temp > 0)
	{
		temp /= 10;
		digit_count++;
	}
	return (ft_assign_unsigned(num, digit_count));
}
