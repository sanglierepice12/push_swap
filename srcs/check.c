/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:55:05 by gsuter            #+#    #+#             */
/*   Updated: 2024/03/02 11:55:05 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*void	ft_double_fc(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{
		j = 1;
		while (str[j])
		{
			if (str[i] == str[j])
				ft_error();
			j++;
		}
		i++;
	}
}*/

void	ft_search_space(char **str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != 32)
				return;
			j++;
		}
		i++;
	}
	ft_error();
}

void	check_double(t_struct **a)
{
	t_struct	*temp;
	t_struct	*doz;

	if (!(*a)->next)
		return;
	else
	{
		doz = *a;
		while(doz->next)
		{
			temp = doz->next;
			while (temp)
			{
				//printf("a content = %d\n", (*a)->content);
				if (temp->content == doz->content)
					ft_error();
				temp = temp->next;
			}
			doz = doz->next;
		}
	}
}

void ft_check_all_is_numbers(char **tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (tab[i][j + 1] && (tab[i][j] == '-' || tab[i][j] == '+'))
			j++;
		if (ft_strlen(tab[i]) > 11)
			ft_error();
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
/*
int rank = 0
a = int_min
b = int_max

 on parcour, si i < b //it_min
					b = i
				i rank = 0;
				a = b
				b = int max
				rank++;
				si i < b et b > a          a vaut la valeur du  dernier rank trouve


 */