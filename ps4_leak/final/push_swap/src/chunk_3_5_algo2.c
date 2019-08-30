/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_3_5_algo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 19:52:09 by minakim           #+#    #+#             */
/*   Updated: 2019/08/29 20:42:07 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_4(t_stack *a, t_stack *b, t_struct *nbr)
{
	if (a->top->value >= b->top->value)
		pb(a, b);
	else if (a->top->value <= nbr->min)
}

void	sort_5(t_stack *a, t_stack *b, t_struct *nbr, int n)
{
	if (n == 4)
		sort_4(a, b, nbr);
	else
	{
	}
}
