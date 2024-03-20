/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:15:32 by gostr             #+#    #+#             */
/*   Updated: 2024/03/08 10:15:32 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_struct **a, int flag)
{
	t_struct	*temp;

	if (*a && (*a)->next)
	{
		temp = ft_node_last(*a)->prev;
		*a = temp->next;
		temp->next = NULL;
		while (temp->prev)
			temp = temp->prev;
		(*a)->next = temp;
		temp->prev = (*a);
		(*a)->prev = NULL;
		if (flag)
			ft_printf("rra\n");
	}
}

void	rrb(t_struct **b, int flag)
{
	t_struct	*temp;

	if (*b && (*b)->next)
	{
		temp = ft_node_last(*b)->prev;
		*b = temp->next;
		temp->next = NULL;
		while (temp->prev)
			temp = temp->prev;
		(*b)->next = temp;
		temp->prev = (*b);
		(*b)->prev = NULL;
		if (flag)
			ft_printf("rrb\n");
	}
}

void	rrr(t_struct **a, t_struct **b)
{
	if ((*a && (*a)->next) && (*b && (*b)->next))
	{
		rra(a, 0);
		rrb(b, 0);
		ft_printf("rrr\n");
	}
}
