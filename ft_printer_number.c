/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:28:17 by gostr             #+#    #+#             */
/*   Updated: 2024/02/21 13:28:17 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	print_u_number(unsigned int nb, char *set)
{
	size_t len;

	len = ft_strlen(set);
	if (nb < len)
		return (putchar(set[nb]));
	if (nb >= len)
		print_u_number(nb / len, set);
	return (putchar(set[nb % len]));
}

void	print_number(int nb, char *set)
{
	if (nb < 0)
	{
		print_u_number(nb *= -1, set);
		ft_putchar('-');
	}
	else
		print_u_number(nb, set);
}

int	main(int arc, char **argv)
{
	if (arc < 3 || arc > 3)
		return (printf("peu ou pas assez d'arg"), 0);
	print_number((unsigned int)atoi(argv[1]), argv[2]);
	return 0;
}