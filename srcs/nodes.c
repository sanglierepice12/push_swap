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

void	free_lst(t_struct **head)
{
	t_struct	*temp;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->content = 0;
		free(*head);
		*head = temp;
	}
}

t_struct	*ft_new_node(int content)
{
	t_struct	*new;

	new = ft_calloc(1, sizeof(t_struct));
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_struct	*ft_node_last(t_struct *head)
{
	t_struct	*temp;

	if (!head)
		return (0);
	temp = head;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_node_add_back(t_struct **head, t_struct *new)
{
	t_struct	*last;

	if (*head)
	{
		last = ft_node_last(*head);
		last->next = new;
		new->prev = last;
	}
	else
		*head = new;
}

void	ft_node_add_front(t_struct **lst, t_struct *new)
{
	new->next = *lst;
	*lst = new;
}

/*
void	print_lst(t_struct **head)
{
	t_struct	*temp;
	size_t	i;

	i = 0;
	if (*head)
	{
		temp = *head;
		while (temp->next)
		{
			printf("Elem n'%zu: %d rank : %d\n", i, temp->content, temp->rank);
			temp = temp->next;
			i++;
		}
		printf("Elem n'%zu: %d rank : %d\n", i, temp->content, temp->rank);
	}
	else
		ft_printf("empty list\n");
	//free_lst(head);
}*/
