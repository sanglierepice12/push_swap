/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:25:12 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/15 16:25:12 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_struct	*ft_new_node(int content)
{
	t_struct	*head;

	head = malloc(sizeof(t_struct));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = head;
	head->prev = head;
	return (head);
}

void	ft_add_front(t_struct **head, t_struct *new)
{
	if (head && new)
	{
		new->next = (*head)->next;
		(*head)->next = new;
		(*head)->prev = new;
		new->prev = (*head)->prev->next;
	}
	(*head) = new;
}