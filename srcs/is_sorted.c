/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:45:59 by gsuter            #+#    #+#             */
/*   Updated: 2024/03/19 15:45:59 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_struct **a)
{
	t_struct	*temp;

	temp = *a;
	while (temp)
	{
		if (temp->next && (temp->rank > temp->next->rank))
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	three_sorted(t_struct **a, t_struct **b)
{
	pb(a,b);
	if (is_sorted(a))
		pa(a,b);
	else
	{
		ra(a, 1);
		pa(a, b);
	}
	/*if (is_sorted(a))
		free_lst(a);
	else
		while ((*a)->rank > (*a)->next->rank)*/
}