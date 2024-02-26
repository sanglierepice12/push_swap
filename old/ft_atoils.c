/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:07:08 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 16:08:15 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_atoi(char *str)
{
	int		result;
	size_t	i;
	int		minus;

	minus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	result = 0;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}

long	ft_atol(char *str)
{
	long	result;
	size_t	i;
	int		minus;

	minus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	result = 0;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}
