/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:15:32 by gostr             #+#    #+#             */
/*   Updated: 2024/03/08 10:15:32 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_struct **a, t_struct **b)
{
	t_struct	*temp;

	if (*b)
	{
		temp = *b;
		*b = (*b)->next;
		if (*b)
			(*b)->prev = NULL;
		if (*a)
		{
			temp->next = *a;
			(*a)->prev = temp;
		}
		else
			temp->next = NULL;
		*a = temp;
		ft_printf("pa\n");
	}
}

void	pb(t_struct **a, t_struct **b)
{
	t_struct	*temp;

	if (*a)
	{
		temp = *a;
		*a = (*a)->next;
		if (*a)
			(*a)->prev = NULL;
		if (*b)
		{
			temp->next = *b;
			(*a)->prev = temp;
		}
		else
			temp->next = NULL;
		*b = temp;
		ft_printf("pb\n");
	}
}
