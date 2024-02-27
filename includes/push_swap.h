/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gsuter@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:07:12 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 17:07:12 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/incs/libft.h"

typedef	struct s_struct
{
	int	content;
	struct s_struct *next;
	struct s_struct *prev;
}	t_struct;

//PARSE
t_struct	*ft_parse(char *str, t_struct	**a);
void		ft_error(void);

//ATOL
long	ft_atol(const char *nptr);

//NODES
t_struct	*ft_new_node(int content);
void	ft_node_add_back(t_struct **lst, t_struct *new);

#endif
