/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:09:00 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 16:09:00 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_splitting(char **str)
{
	size_t		word;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	word = 1;
	while (str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] != 32)
		{
			node = ft_new_node(ft_atoi(&str[i]));
			ft_add_bak(&head, node)
			j++;
			i++;
		}
		else
		{
			while (str[i] == 32)
				i++;
			if (str[i])
				word++;
		}
	}
	return (word);
}

/*if ((long)ft_atoi(dest) != ft_atol(dest))
		return (free(dest), ft_error(), 0);*/