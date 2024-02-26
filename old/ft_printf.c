/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:02:56 by gostr             #+#    #+#             */
/*   Updated: 2024/02/21 12:54:27 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_format_arg(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (type == 's')
		return (ft_putstr(1, va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (ft_print_nb(va_arg(args, int), "0123456789"));
	if (type == 'u')
		return (ft_print_nb(va_arg(args, unsigned long), "0123456789"));
	return (ft_error(), -1);
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			len += ft_format_arg(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (va_end(args), len);
}

/*int	main(int arc, char **argv)
{
	if (arc < 2)
		return (ft_printf("pas assez d'arguments\n"), 0);
	ft_printf("%s", argv[1]);
	return (0);
}*/