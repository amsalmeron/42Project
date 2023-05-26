/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:29:40 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/25 16:47:23 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_arg(const char type, va_list ap);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_int(long d, int base, char type);
int	ft_print_unsigned(unsigned int num);
int	ft_print_ptr(void *ptr);
int	ft_ptr_hex(unsigned long num);
int	ft_print_hex(unsigned long num, int digit_count, int count);

#endif
