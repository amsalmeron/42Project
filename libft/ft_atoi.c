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

int	ft_invalid_char_check(char c)
{
	if (c < 48 || c > 57)
	{
		if (c != 32 && c != 45 && c != 12 && c != 53)
			return (1);
	}
	return (0);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	sum;
	int	negative;

	i = 0;
	sum = 0;
	negative = 1;
	// skip leading whitespace
    	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        	i++;

    	// handle sign
    	if (str[i] == '-')
    	{
        	negative = -1;
        	i++;
    	}
    	else if (str[i] == '+')
    	{
        	i++;
    	}
	// convert digits
    	while (str[i] >= '0' && str[i] <= '9')
   	 {
    	    int digit = str[i] - '0';
    	   	 if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && digit > INT_MAX % 10))
   	     	{
     	    		return negative == -1 ? INT_MIN : INT_MAX;
     		}
        	sum = sum * 10 + digit;
        	i++;
    	}

    	return sum * negative;
}
