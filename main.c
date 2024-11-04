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
	int count = ft_printf("This is a character %c\n", c);
	printf("%i chars\n", count);
	count = ft_printf("This is a character %%\n");
	printf("%i chars\n", count);
}
