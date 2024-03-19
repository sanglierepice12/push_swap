/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:07:12 by gsuter            #+#    #+#             */
/*   Updated: 2024/03/13 14:53:29 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/incs/libft.h"
#include <stdio.h>
typedef	struct s_struct
{
	int				content;
	int 			rank;
	struct s_struct *prev;
	struct s_struct *next;
}	t_struct;
void	print_lst(t_struct **head);
//PARSING
t_struct	*ft_parse_to_node(char **str, t_struct **a);
t_struct	*ft_parse(char *str, t_struct	**a);

//SORT
int			ft_find_next(t_struct **a, int min, int max);
void		ft_search_interval(t_struct **a, t_struct **b, int min, int max);
void		big_sort(t_struct **a, t_struct **b, int len);
void		ft_is_sort(t_struct **a, t_struct **b);

//IS_SORTED
int			is_sorted(t_struct **a);
void		three_sorted(t_struct **a, t_struct **b);

//WRITE ERROR
void		ft_error(void);

//ATOL
long		ft_atol(const char *nptr);

//NODES
void		free_lst(t_struct **head);
t_struct	*ft_new_node(int content);
t_struct	*ft_node_last(t_struct *head);
void		ft_node_add_back(t_struct **lst, t_struct *new);
void		ft_node_add_front(t_struct **lst, t_struct *new);

//CHECK
void		ft_search_space(char **str);
void		check_double(t_struct **a);
void		ft_check_all_is_numbers(char **tab);

//RULES
void		sa(t_struct **a, int flag);
void		sb(t_struct **b, int flag);
void		ss(t_struct **a,t_struct **b);
void		pa(t_struct **a, t_struct **b);
void		pb(t_struct **a, t_struct **b);
void		ra(t_struct **a, int flag);
void		rb(t_struct **b, int flag);
void		rr(t_struct **a, t_struct **b);
void		rra(t_struct **a, int flag);
void		rrb(t_struct **b, int flag);
void		rrr(t_struct **a, t_struct **b);

//RANKING
void		ranking(t_struct **stack);
int			ft_node_size(t_struct **a);

#endif
