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

int ft_check(char **tab)
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
				return (ft_error(), 1);
			j++;
		}
		if (ft_atoi(tab[i]) != ft_atol(tab[i]))
			return (ft_error(), 1);
		i++;
	}
}

t_struct	*ft_parse(char *str)
{
	char **dest;

	dest = ft_split(str, 32);
	if (!dest)
		return (ft_error(), NULL);
	ft_check(dest);

	ft_new_node()
}

// je atoi(dest[0]) = t_struct a->content;
// algo
// mes printfs d operation
// free all
