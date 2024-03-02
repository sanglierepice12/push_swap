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

void	print_lst(t_struct **head)
{
	t_struct	*temp;
	size_t	i;

	i = 0;
	temp = *head;
	while (temp->next != *head)
	{
		printf("Elem n'%zu: %d\n", i, temp->content);
		temp = temp->next;
		i++;
	}
	printf("Elem n'%zu: %d\n", i, temp->content);
}

t_struct	*ft_new_node(int content)
{
	t_struct	*new;

	new = malloc(sizeof(t_struct));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = new;
	/*new->prev = new;*/
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
		/*new->prev = last;
		new->prev->next = *head;
		(*head)->prev = new;*/
	}
	else
		*head = new;
}