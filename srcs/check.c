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
				return ;
			j++;
		}
		i++;
	}
	ft_error(NULL);
}

void	check_double(t_struct **a)
{
	t_struct	*temp;
	t_struct	*doz;

	if (!(*a)->next || !(*a))
		return ;
	else
	{
		doz = *a;
		while (doz->next)
		{
			temp = doz->next;
			while (temp)
			{
				if (temp->content == doz->content)
					ft_error(a);
				temp = temp->next;
			}
			doz = doz->next;
		}
	}
}

void	ft_check_all_is_numbers(char **tab)
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
			ft_error(NULL);
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				return (ft_error(NULL));
			j++;
		}
		if (ft_atoi(tab[i]) != ft_atol(tab[i]))
			return (ft_error(NULL));
		i++;
	}
}
