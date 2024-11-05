/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:13 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/04 17:03:15 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		write(1, str, 1);
		str++;
		i++;
	}
	return (i);
}

int	ft_putnbr_hexa(int n, int cap)
{
	char	*hexa;
	int		count;

	count = 0;
	hexa = "0123456789abcdef";
	if (n < 16)
	{
		if (n > 9)
			count += ft_putchar(hexa[n] + cap);
		else
			count += ft_putchar(hexa[n]);
	}
	else
	{
		count += ft_putnbr_hexa(n / 16, cap);
		count += ft_putnbr_hexa(n % 16, cap);
	}
	return (count);
}
/*
int main()
{
	int n = 600;
	int count = ft_putnbr_hexa(n);
	printf("%x\n", n);
	printf("%i\n", count);
}
*/