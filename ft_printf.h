/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:33:44 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/04 14:36:21 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putnbr(long number, int count);
int	ft_putchar(int c);
int	ft_putnbr_hexa(unsigned int n, int cap);
int	ft_print_ptr(unsigned long long number, int count);
int	ft_ptr(unsigned long long ptr, int count);

#endif
