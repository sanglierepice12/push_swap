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

int	ft_search_space(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32)
			return (1);
		else if (!ft_isdigit(str[i]))
			ft_error();
		i++;
	}
	return (0);
}