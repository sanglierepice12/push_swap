/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:49:15 by gsuter            #+#    #+#             */
/*   Updated: 2024/03/06 16:49:15 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_struct **a, int flag)
{
	t_struct	*temp;

	if (*a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = *a;
		*a = temp;
		if (flag == 1)
			ft_printf("sa\n");
	}
}

void	sb(t_struct **b, int flag)
{
	t_struct	*temp;

	if ((*b) && (*b)->next)
	{
		temp = (*b)->next;
		(*b)->next = temp->next;
		temp->next = *b;
		*b = temp;
		if (flag == 1)
			ft_printf("sb\n");
	}
}

void	ss(t_struct **a, t_struct **b)
{
	if ((*a && *b) && ((*a)->next && (*b)->next))
	{
		sa(a, 0);
		sb(b, 0);
		ft_printf("ss\n");
	}
}