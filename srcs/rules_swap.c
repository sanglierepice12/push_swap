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

void	sa(t_struct **a)
{
	t_struct	temp;

	if ((*a) && (*a)->next)
	{
		temp = (*a);
		(*a) = (*a)->next;
		(*a)->next = temp;
	}
	ft_printf("sa\n");
}

void	sb(t_struct **b)
{
	int	temp;

	if ((*b) && (*b)->next)
	{
		temp = (*b);
		(*b) = (*b)->next;
		(*b)->next = temp;
	}
	ft_printf("")
}

void	ss(t_struct **a,t_struct **b)
{
	sa(a);
	sb(b);
}