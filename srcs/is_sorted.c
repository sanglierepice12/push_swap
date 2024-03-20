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

void	three_follow(t_struct **a, int x, int y, int z)
{
	if (x > y && y < z && x < z)
		sa(a, 1);
	else if (x > y && y < z && x > z)
		ra(a, 1);
}

void	three_sorted(t_struct **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->content;
	y = (*a)->next->content;
	z = (*a)->next->next->content;
	if (x < y && y > z && x < z)
	{
		rra(a, 1);
		sa(a, 1);
	}
	else if (x > y && y > z)
	{
		ra(a, 1);
		sa(a, 1);
	}
	else if (x < y && y > z && x > z)
		rra(a, 1);
	else
		three_follow(a, x, y, z);
}

void	five_less_sort(t_struct **a, t_struct **b)
{
	int	size;
	int	i;

	i = 0;
	size = ft_node_size(a);
	while (i < size)
	{
		if ((*a)->rank == 0 || ((*a)->rank == 1 && size == 5))
			pb(a, b);
		else
			ra(a, 1);
		i++;
	}
	while ((*a)->prev)
		(*a) = (*a)->prev;
	three_sorted(a);
	if (size == 5 && is_sorted(b))
		sa(b, 1);
	while (*b)
		pa(a, b);
}
