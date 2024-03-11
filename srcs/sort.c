/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.1337.ma>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:11:58 by gostr             #+#    #+#             */
/*   Updated: 2024/03/09 18:11:58 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ranking(t_struct **a)
{
	t_struct	*temp;
	t_struct	*doz;
	int			i;

	doz = *a;
	while (doz)
	{
		i = 0;
		temp = *a;
		while (temp)
		{
			if (doz->content > temp->content)
				i++;
			temp = temp->next;
		}
		doz->rank = i;
		doz = doz->next;
	}
}

// bien calloc les nodes