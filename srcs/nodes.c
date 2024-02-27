/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:07:26 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 18:07:26 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_struct	*ft_new_node(int content)
{
	t_struct	*new;

	new = malloc(sizeof(t_struct));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = new;
	new->prev = new;
	return (new);
}

t_struct	*ft_node_last(t_struct *lst)
{
	t_struct	*temp;

	if (!lst)
		return (0);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_node_add_back(t_struct **head, t_struct *node)
{
	if (!node)
		return;
	if (*head)
	{
		node->next = *head;
		node->prev = (*head)->prev;
		(*head)->prev->next = node;
		(*head)->prev = node;
	}
	(*head) = node;
}