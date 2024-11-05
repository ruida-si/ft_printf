/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:18:43 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/05 12:18:45 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	number;
	int		count;

	count = 0;
	number = n;
	if (number < 0)
	{
		count += ft_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		count += ft_putnbr(number / 10);
		count += ft_putchar(number % 10 + '0');
	}
	else
		count += ft_putchar(number + '0');
	return (count);
}
/*
int main()
{
	int number = 123;
	int count = ft_putnbr(number);
	printf("%i\n", count);
}
*/