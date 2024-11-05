/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:09:40 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/04 12:09:43 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_verify(char c);
int	ft_putchar(int c);

int	pf_print(va_list *ap, char spec, int count)
{
	count = 0;
	if (spec == 'c')
		count = ft_putchar(va_arg(*ap, int));
	else if (spec == '%')
		count = ft_putchar('%');
	else if (spec == 's')
		count = ft_putstr(va_arg(*ap, char *));
	else if (spec == 'i' || spec == 'd')
		count = ft_putnbr(va_arg(*ap, int));
	else if (spec == 'u')
		count = ft_putnbr(va_arg(*ap, unsigned int));
	else if (spec == 'x')
		count = ft_putnbr_hexa(va_arg(*ap, unsigned int), 0);
	else if (spec == 'X')
		count = ft_putnbr_hexa(va_arg(*ap, unsigned int), -32);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && pf_verify(*(++format)))
		{
			count += pf_print(&ap, *format, count);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}

int	pf_verify(char c)
{
	char	*spec;

	spec = "cspdiuxX%";
	while (*spec)
	{
		if (*spec == c)
			return (1);
		spec++;
	}
	return (0);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}
