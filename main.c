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
	char c = 67;
	char str[] = "porto";
	int number = 0;
	int count;

	count = ft_printf("MY: char %c percent %% string %s number %i\n", c, str, number);
	printf("%i chars\n", count);

	count = printf("OR: char %c percent %% string %s number %i\n", c, str, number);
	printf("%i chars\n", count);

	count = ft_printf("MY: %p\n", (void *)12);
	printf("%i chars\n", count);

	count = printf("MY: %p\n", (void *)12);
	printf("%i chars\n", count);
}
