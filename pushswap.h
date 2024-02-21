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
#include <stdio.h>
/* ************************** */

typedef struct s_struct
{
	int		content;
	struct	s_struct *next;
	struct	s_struct *prev;
}t_struct;

//PUSH
void	ft_pushswap(int *content);

//NODES
t_struct *ft_new_node(int *content);

//UTILS
size_t	ft_count_numbers(char *str);
int	ft_putstr(int fd, char *str);
int	ft_putchar(char c);
size_t	ft_strlen(char *str);

//PRINTF
int	ft_printf(char *str, ...);

#endif