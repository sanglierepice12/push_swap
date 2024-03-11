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

/*void	ranking(t_struct **stack)
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
}*/
void	ranking_to_minus(t_struct **temp)
{
	while ((*temp)->next)
	{
		(*temp)->rank = -1;
		(*temp) = (*temp)->next;
	}
	(*temp)->rank = -1;
	while ((*temp)->prev)
		*temp = (*temp)->prev;
}

void	ranking(t_struct **a)
{
	t_struct	*temp;
	t_struct	*doz;
	int			i;

	i = 0;
	doz = *a;
	ranking_to_minus(&temp);
	while (temp->next)
	{
		temp = doz->next;
		while (temp->next)
		{
			if (doz->content < temp->content && temp->rank == -1)
				doz = temp;
			temp->rank = i;
			i++;
			temp = temp->next;
		}
	}
	while ((temp)->prev)
		temp = (temp)->prev;
	*a = temp;
	print_lst(a);
}


// compter savoir combien d elements sont plus petit que mon index 0
// bien calloc les nodes