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
	free_lst(&a);
	return (EXIT_SUCCESS);
}

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
