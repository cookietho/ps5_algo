/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_3_5_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 18:07:15 by minakim           #+#    #+#             */
/*   Updated: 2019/08/29 20:42:09 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_3_mid(t_stack *s, t_struct *nbr, int n)
{
	t_node	*tmp;
	int		mid;
	
	tmp = s->top;
	mid = tmp->value;
	for (int i = 0; i < n; i++)
	{
		if (tmp->value != nbr->min && tmp->value != nbr->max)
			mid = tmp->value;
		tmp = tmp->next;
	}
	nbr->mid = mid;
}

void	check_b_3(t_stack *s, t_struct *nbr, int n)
{
	t_node	*tmp;
	int		max;
	int		min;

	tmp = s->top;
	max = 0;
	min = tmp->value;
	for (int i = 0; i < n; i++)
	{
		if (tmp->value > max)
			max = tmp->value;
		else if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	nbr->min = min;
	nbr->max = max;
	check_3_mid(s, nbr, n);
}

void	sort_3(t_stack *s, int n)
{
	t_struct	*nbr;

	nbr = init_nbr();
	check_b_3(s, nbr, n);
	if (s->top->value == nbr->max && s->top->next->value == nbr->min)
	{ // 3 1 2
		rrb(s);
		sb(s);
	}
	else if (s->top->value == nbr->mid)
	{
		if (s->top->next->value == nbr->max) // 2 3 1
			sb(s);
		else //2 1 3
			rrb(s);
	}
	else if (s->top->value == nbr->min)
	{
		if (s->top->next->value == nbr->mid) // 1 2 3
		{
			sb(s);
			rrb(s);
		}
		else // 1 3 2
			for (int i = 0; i < 2; i++)
				rrb(s);
	}
	free(nbr);
}

void	chunk_3_5_algo(t_stack *a, t_stack *b, int n)
{
	int		i;
	t_struct	*nbr;

	i = n;
	nbr = init_nbr();
	if (n == 3)
		sort_3(b, n);
	else
	{
		while (i > 3)
			pa(a, b);
		sort_3(b, 3);
		check_b_3(b, nbr, 3);
		while (n-- > 3)
		{
			sort_5(a, b, nbr, n);
		}
	}
}
