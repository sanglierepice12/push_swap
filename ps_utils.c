/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:36:58 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/15 17:36:58 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_count_numbers(char *str)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 1;
	while (str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] != 32)
			i++;
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

#include <stdio.h>
int	main(int arc, char **argv)
{
	if (arc < 2)
		return (printf("non"), 0);
	size_t	i;
	size_t	word;
	i = 1;
	while (argv[i])
	{
		word += ft_count_numbers(argv[i]);
		i++;
	}
	printf("word = %zu", word);
	return 0;
}