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
int	pf_putchar(int c);

int	pf_print(va_list *ap, char spec, int count)
{
	count = 0;
	if (spec == 'c')
		count = pf_putchar(va_arg(*ap, int));
	else if (spec == '%')
		count = pf_putchar('%');
	else if (spec == 's')
		count = ft_putstr(va_arg(*ap, char *));
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
			count += pf_putchar(*format);
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

int	pf_putchar(int c)
{
	return (write(1, &c, 1));
}
