/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:20:11 by ruida-si          #+#    #+#             */
/*   Updated: 2024/11/04 15:20:13 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char c = 'A';
	char *str = 0x0;
	int number = 2345615;

	int count = ft_printf("MY: char %c percent %% string %s number %X\n", c, str, number);
	ft_printf("%i chars\n", count);

	count = printf("OR: char %c percent %% string %s number %X\n", c, str, number);
	printf("%i chars\n", count);
}
