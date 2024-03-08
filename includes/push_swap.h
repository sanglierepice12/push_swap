/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:07:12 by gsuter            #+#    #+#             */
/*   Updated: 2024/03/08 11:21:19 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/incs/libft.h"
#include <stdio.h>
typedef	struct s_struct
{
	int		content;
	int 	rank;
	struct s_struct *next;
	struct s_struct *other_next;
	//struct s_struct *prev;
}	t_struct;

//PARSING
t_struct	*ft_parse_to_node(char **str, t_struct **a);
t_struct	*ft_parse(char *str, t_struct	**a);

//WRITE ERROR
void		ft_error(void);

//ATOL
long		ft_atol(const char *nptr);

//NODES
t_struct	*ft_node_last(t_struct *head);
t_struct	*ft_new_node(int content);
void		ft_node_add_back(t_struct **lst, t_struct *new);
void		print_lst(t_struct **head);
void		free_lst(t_struct **head);
void		ft_node_add_front(t_struct **lst, t_struct *new);

//check
void		ft_search_space(char **str);
void		check_double(t_struct **a);
void		ft_check_all_is_numbers(char **tab);
void		ft_double_fc(char **str);

//RULES
void		sa(t_struct **a, int flag);
void		sb(t_struct **b, int flag);
void		ss(t_struct **a,t_struct **b);
void		pa(t_struct **a, t_struct **b);
void		pb(t_struct **a, t_struct **b);
void		ra(t_struct **a, int flag);
void		rb(t_struct **b, int flag);
void		rr(t_struct **a, t_struct **b);

#endif
