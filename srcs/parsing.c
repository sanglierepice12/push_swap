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

t_struct	*ft_parse_to_node(char **str, t_struct **a)
{
	size_t	i;

	i = 0;
	ft_check_all_is_numbers(str);
	*a = ft_new_node(ft_atoi(str[i]));
	while (++i, str[i])
	{
		ft_node_add_back(a, ft_new_node(ft_atoi(str[i])));
	}
	check_double(a);
	ranking(a);
	return (*a);
}

t_struct	*ft_parse(char *str, t_struct	**a)
{
	char		**dest;

	dest = ft_split(str, 32);
	if (!dest)
		return (ft_error(a), NULL);
	ft_search_space(dest);
	*a = ft_parse_to_node(dest, a);
	ft_free_tab(dest);
	return (*a);
}
