/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:15:32 by gostr             #+#    #+#             */
/*   Updated: 2024/03/08 10:15:32 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_struct **a, int flag)
{
	t_struct	*temp;

	if (*a && (*a)->next)
	{
		// 1 2 3 4
		temp = (*a);
		*a = (*a)->next;
		(*a)->prev = NULL;
		temp->next = ft_node_last(*a)->next;
		ft_node_add_back(a, temp);
		if (flag == 1)
			ft_printf("ra\n");
	}
}

void	rb(t_struct **b, int flag)
{
	t_struct	*temp;

	if (*b && (*b)->next)
	{
		temp = (*b);
		*b = (*b)->next;
		temp->next = ft_node_last(*b)->next;
		ft_node_add_back(b, temp);
		if (flag == 1)
			ft_printf("rb\n");
	}
}

void	rr(t_struct **a, t_struct **b)
{
	ra(a, 0);
	rb(b, 0);
	ft_printf("rr\n");
}
