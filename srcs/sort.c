/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.1337.ma>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:11:58 by gostr             #+#    #+#             */
/*   Updated: 2024/03/09 18:11:58 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ranking(t_struct **stack)
{
	t_struct	*lst;
	size_t		i;
	int		temp_content;
	int		temp;

	lst = *stack;
	i = 0;
	temp = -2147483648;
	while (i < node_size(stack))
	{
		lst = *stack;
		temp_content = 2147483647;
		while (lst)
		{
			if ((lst->content <= temp_content) && (lst->content > temp || i == 0))
			{
				lst->rank = i;
				temp_content = lst->content;
			}
			lst = lst->next;
		}
		i++;
		temp = temp_content;
	}
}
