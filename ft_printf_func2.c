/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:13 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/05 18:55:37 by ruida-si         ###   ########.fr       */
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

int	ft_putnbr(long n, int base, int count, int cap)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n < base)
	{
		if (n > 9)
			count += ft_putchar(hexa[n] + cap);
		else
			count += ft_putchar(hexa[n]);
	}
	else
	{
		count += ft_putnbr(n / base, base, 0, cap);
		count += ft_putnbr(n % base, base, 0, cap);
	}
	return (count);
}

int	ft_ptr(unsigned long ptr, int count)
{
	static int	n;
	char		*hexa;

	hexa = "0123456789abcdef";
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	if (!n)
	{
		count += write(1, "0x", 2);
		n++;
	}
	if (ptr < 16)
		count += ft_putchar(hexa[ptr]);
	else
	{
		count += ft_ptr(ptr / 16, 0);
		count += ft_putchar(hexa[ptr % 16]);
	}
	n = 0;
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
