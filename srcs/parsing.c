/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:12:16 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 17:12:16 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_check(char **tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (tab[i][j + 1] && (tab[i][j] == '-' || tab[i][j] == '+'))
			j++;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				return (ft_error());
			j++;
		}
		if (ft_atoi(tab[i]) != ft_atol(tab[i]))
			return (ft_error());
		i++;
	}
}

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

t_struct	*ft_parse(char *str, t_struct	**a)
{
	char		**dest;
	size_t		i;
	t_struct	*temp;

	dest = ft_split(str, 32);
	if (!dest)
		return (ft_error(), NULL);
	ft_check(dest);
	i = 0;
	while(dest[i])
	{
		temp = ft_new_node(ft_atoi(dest[i]));
		ft_node_add_back(a, temp);
		printf("dest[%zu] = %d\n", i, (*a)->content);
		i++;
	}
	print_lst(a);
	/*temp = *a;
	temp->prev->next = NULL;
	while (temp)
	{
		printf("next-> %d\n", temp->content);
		temp = temp->next;
	}*/
	return (*a);
}

// je atoi(dest[0]) = t_struct a->content;
// algo
// mes printfs d operation
// free all
