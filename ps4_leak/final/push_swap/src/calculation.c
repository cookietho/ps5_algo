/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 00:31:50 by minakim           #+#    #+#             */
/*   Updated: 2019/08/27 15:53:17 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		my_power(int n)
{
	int	i;
	int	nbr;

	nbr = 1;
	for (i = 0; i < n; ++i)
		nbr *= 2;
	return (nbr);
}

int		find_npower(int n)
{
	int	x;

	x = 0;
	while (n > my_power(x)) {
		x++;
	}
	return (x);
}

int		*create_arr(int nbr_element)
{
	int	n;
	int	*arr;

	n = find_npower(nbr_element);
	arr = (int*)malloc(sizeof(int) * n + 2);
	return (arr);
}
