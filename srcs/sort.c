/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>         +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:53:33 by gostr             #+#    #+#             */
/*   Updated: 2024/03/13 10:53:33 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_next(t_struct **a, int min, int max)
{
	t_struct	*temp;
	int			i;
	int			j;

	temp = *a;
	i = 0;
	j = 1;
	while (temp && !(temp->rank >= min && temp->rank <= max))
	{
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (0);
	temp = ft_node_last(temp);
	while (temp && !(temp->rank >= min && temp->rank <= max))
	{
		j++;
		temp = temp->prev;
	}
	if (j >= i)
		return (1);
	else
		return (-1);
}

void	ft_search_interval(t_struct **a, t_struct **b, int min, int max)
{
	int			u_flag;

	u_flag = ft_find_next(a, min, max);
	while (u_flag)
	{
		if (u_flag == 1)
		{
			while (!((*a)->rank >= min && (*a)->rank <= max))
				ra(a, 1);
		}
		else
		{
			while (!((*a)->rank >= min && (*a)->rank <= max))
				rra(a, 1);
		}
		pb(a, b);
		u_flag = ft_find_next(a, min, max);
	}
}

void	ft_back_sort(t_struct **a, t_struct **b, int max)
{
	int			u_flag;

	u_flag = ft_find_next(b, max, max);
	while (u_flag)
	{
		if (u_flag == 1)
		{
			while ((*b)->rank != max)
				rb(b, 1);
		}
		else
		{
			while ((*b)->rank != max)
				rrb(b, 1);
		}
		max--;
		pa(a, b);
		u_flag = ft_find_next(b, max, max);
	}
}

void	big_sort(t_struct **a, t_struct **b, int len)
{
	int	i;

	i = 0;
	while (ft_node_size(a) >= 22)
	{
		ft_search_interval(a, b, i, i + 21);
		i += 22;
	}
	ft_search_interval(a, b, i, len - 1);
	ft_back_sort(a, b, len - 1);
}

void	ft_is_sort(t_struct **a, t_struct **b)
{
	int	len;

	len = ft_node_size(a);
	if (len == 1)
	{
		free_lst(a);
		exit(EXIT_SUCCESS);
	}
	if (!is_sorted(a))
	{
		free_lst(a);
		exit(EXIT_SUCCESS);
	}
	if (len == 2)
		ra(a, 1);
	else if (len == 3)
		three_sorted(a);
	else if (len <= 5)
		five_less_sort(a, b);
	else
		big_sort(a, b, len);
}
