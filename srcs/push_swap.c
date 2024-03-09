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
		return (0);
	if (arc == 2)
		a = ft_parse(argv[1], &a);
	else
		a = ft_parse_to_node(argv + 1, &a);

	/*-------TESTERS------*/

	pb(&a,&b);
	pb(&a, &b);

	printf("liste a\n");
	print_lst(&a);
	printf("\n");
	printf("liste b\n");
	print_lst(&b);

	rrr(&a, &b);
	printf("\n");
	printf("rrr\n");
	printf("liste a\n");
	printf("\n");
	print_lst(&a);
	printf("liste b\n");
	print_lst(&b);
	node_size(&a);
	node_size(&b);
	return (0);
}

/*----------tester-------------*/
//sa(&a, 1);
//sb(&b, 1);
//ss(&a, &a);
/*-----------------------------*/
//check si a est sorted ou pas
// si non -> check si = 2
// 				then swap a
// check si = 3
// 				check biggest nb at the top / middle / bot
//				do what you have to do brow
// check si plus ducoup turckish



/*si je ne comprends pas
if (*a && (*a)->next)
{
	// 1 2 3
	temp = (*a)->next;
	printf("---------------------------------------temp = (*a)->next;\n");
	printf("--CONTENT---------\n");
	printf("temp->content = %d\n", temp->content);
	printf("*a->content = %d\n", (*a)->content);
	printf("NEXT CONTENT\n");
	printf("temp->next->content = %d\n", temp->next->content);
	printf("*a->next->content = %d\n", (*a)->next->content);
	(*a)->next = temp->next;
	printf("---------------------------------(*a)->next = temp->next;\n");
	printf("--CONTENT---------\n");
	printf("temp->content = %d\n", temp->content);
	printf("*a->content = %d\n", (*a)->content);
	printf("--NEXT CONTENT---------------\n");
	printf("temp->next->content = %d\n", temp->next->content);
	printf("*a->next->content = %d\n", (*a)->next->content);
	temp->next = *a;
	printf("-------------------------------------temp->next = *a;\n");
	printf("--CONTENT---------\n");
	printf("temp->content = %d\n", temp->content);
	printf("*a->content = %d\n", (*a)->content);
	printf("--NEXT CONTENT---------------\n");
	printf("temp->next->content = %d\n", temp->next->content);
	printf("*a->next->content = %d\n", (*a)->next->content);
	*a = temp;
	printf("-----------------------------------------------*a = temp;\n");
	printf("--CONTENT---------\n");
	printf("temp->content = %d\n", temp->content);
	printf("*a->content = %d\n", (*a)->content);
	printf("--NEXT CONTENT---------------\n");
	printf("temp->next->content = %d\n", temp->next->content);
	printf("*a->next->content = %d\n", (*a)->next->content);
}*/