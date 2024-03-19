/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:05:09 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 17:05:09 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int arc, char **argv)
{
	t_struct	*a;
	t_struct	*b;

	a = NULL;
	b = NULL;
	if (arc < 2 || (arc == 2 && !argv[1][0]))
		return (EXIT_FAILURE);
	if (arc == 2)
		a = ft_parse(argv[1], &a);
	else
		a = ft_parse_to_node(argv + 1, &a);
	ft_is_sort(&a, &b);
    return (EXIT_SUCCESS);
}

/*//check si a est sorted ou pas
// si non -> check si = 2
// 				then swap a
// check si = 3
// 				check biggest nb at the top / middle / bot
//				do what you have to do brow
// check si plus ducoup turckish*/
/*-------TESTERS------*/
/*
printf("------BASE------\n");
printf("liste a\n");
print_lst(&a);
printf("\n");
printf("liste b\n");
print_lst(&b);

printf("------RESULT------\n");
printf("liste a\n");
print_lst(&a);
printf("\n");
printf("liste b\n");
print_lst(&b);*/
