/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:16:15 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/15 16:25:04 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_push_swap(char *str)
{
	ft_splitting(str);
}

int	main(int arc, char **argv)
{
	if (arc < 2)
		return (ft_error(), 0);
	size_t	i;
	size_t	word;

	word = 0;
	i = 1;
	while (argv[i])
	{
		word += ft_splitting(argv[i]);
		i++;
	}
	printf("word = %zu", word);
	return 0;
}
