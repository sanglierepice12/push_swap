/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:05:28 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/26 16:05:28 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_error(void)
{
	ft_putstr(2, "Error\n");
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(int fd, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	return (write(fd, str, len));
}

int	ft_print_u_nb(long int nb, char *set)
{
	size_t	len;

	len = ft_strlen(set);
	if (nb < len)
		return (ft_putchar(set[nb]));
	if (nb >= len)
		ft_print_u_nb(nb / len, set);
	return (ft_putchar(set[nb % len]));
}

int	ft_print_nb(int nb, char *set)
{
	if (nb < 0)
		return (ft_putchar('-'), ft_print_u_nb(-nb, set));
	else
		return (ft_print_u_nb(nb, set));
}
