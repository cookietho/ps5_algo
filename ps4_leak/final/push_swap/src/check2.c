/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:41:37 by minakim           #+#    #+#             */
/*   Updated: 2019/08/27 15:51:20 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_index(t_stack *a, int min)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = a->top;
	while (tmp) {
		if (tmp->value == min)
			return (i + 1);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

int		find_max(t_stack *a)
{
	t_node	*tmp;
	int		max;

	max = 0;
	tmp = a->top;
	while (tmp) {
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

int		find_min(t_stack *a)
{
	t_node	*tmp;
	int		min;

	tmp = a->top;
	min = tmp->value;
	while (tmp) {
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

void	find_mid(t_stack *a, t_struct *nbr)
{
	t_node	*tmp;
	int		mid;

	tmp = a->top;
	mid = tmp->value;
	while (tmp) {
		if (tmp->value != nbr->min && tmp->value
			!= nbr->max)
			mid = tmp->value;
		tmp = tmp->next;
	}
	nbr->mid = mid;
}
