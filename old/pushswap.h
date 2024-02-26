/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:25:04 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/15 16:25:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* ************************** */
# include <stdio.h>
/* ************************** */

typedef struct s_struct
{
	int				content;
	struct s_struct	*next;
	struct s_struct	*prev;
}	t_struct;

//PUSH_SWAP
void		ft_pushswap(int *content);

//PARSE_SPLIT
size_t		ft_splitting(char *str);

//NODES
t_struct	*ft_new_node(int content);
void		ft_add_front(t_struct **head, t_struct *new);

//UTILS
size_t		ft_strlen(char *str);
int			ft_isdigit(char c);

//ATOI_L
long		ft_atol(char *str);
int			ft_atoi(char *str);

//WRITE
void		ft_error(void);
int			ft_putchar(char c);
int			ft_putstr(int fd, char *str);
int			ft_print_u_nb(long int nb, char *set);
int			ft_print_nb(int nb, char *set);

//PRINTF
int			ft_printf(char *str, ...);

#endif